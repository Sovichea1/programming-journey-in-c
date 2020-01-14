//
//  main.c
//  魔鬼方阵
//
//  Created by Sovichea Socheat on 2020/1/14.
//  Copyright © 2020 Sovichea Socheat( Pan Zhineng). All rights reserved.
//

/* A magic square is a square which sum of its elements of every rows , columns and the pivots are equal */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[15][15], i, j, k, p, n;
    
    p = 1;
    
    while ( p == 1)
    {
        printf("enter n( n = 1--5 ),");
        scanf("%d", &n);                        // require 1 to 15 odd * odd matrices
        if ( n!=0 && n <= 15 && n%2!=0)
            p = 0;
    }
    
    // initialization
    
    for ( i = 1 ; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            a[i][j] = 0;
        }
    }
    
    // create the magic square
    
    j = n/2 + 1;
    a[1][j] = 1; // let the middle position of the first row elements = 1
    
    
    for ( k = 2; k <= n*n; k++ )
    {
        i = i - 1;
        j = j + 1;
        
        if ( i < 1 && j > n)
        {
            i = i + 2;
            j = j - 1;
        }
        else
        {
            if ( i < 1) i = n;
            if ( j > n) j = 1;
        }
        
        if ( a[i][j] == 0)
            a[i][j] = k;
        else
        {
            i = i + 2;
            j = j - 1;
            a[i][j] = k;
        }
        
        
    }
    
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
