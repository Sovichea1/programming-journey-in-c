//
//  main.c
//  杨辉三角形pascal triangle
//
//  Created by Sovichea Socheat on 2020/1/14.
//  Copyright © 2020 Sovichea Socheat( Pan Zhineng). All rights reserved.
//

#include <stdio.h>
/*
    1
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1
 
 by looking at it as a matrice
 
 so we see :
 1. the first elements and the last elements is always 1.
 2. count from row 3, we notice that the elements beside the first and the last elements
    is equal to the sum of the last row and same column elements with the last row and previous column
 
    which we can write a[i][j] = a[i-1][j] + a[i-1][j-1]
 
 */

// print 10 rows of the pascal triangle

#define MAX 10

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a[MAX][MAX], i, j;
    
    for ( i = 0; i < MAX; i++)
        for ( j = 0; j < MAX; j++)
        {
            a[i][i] = 1; // assign the 对角元素 = 1
            a[i][0] = 1; // assign each row frist column = 1
        }
    
    for ( i = 2; i < MAX; i++)
        for ( j = 1; j < MAX; j++ )
        {
            a[i][j] = a[i-1][j] + a[i-1][j-1]; // **
        }
    
    for ( i = 0; i < MAX; i++){
        for ( j = 0; j <= i; j++ )
        {
            if ( j == 0)
                printf("%d", a[i][j]);  // all the elements follow by a space except the last element.
            else
                printf(" %d", a[i][j]);
        }
        
        putchar('\n');
    }
    
    
    
    return 0;
}
