//
//  main.c
//  print stars pattern
//
//  Created by Sovichea Socheat on 2020/1/14.
//  Copyright © 2020 Sovichea Socheat( Pan Zhineng). All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char a[5] = { '*', '*','*','*','*'};
    
    int i, j, k;
    char space = ' ';
    for ( i = 0; i < 5; i++)
    {
        printf("\n");
        printf("    ");
        for ( j = 1; j <= i; j++)
            printf("%c", space);
        for ( k = 0; k < 5; k++)
            printf("%3c", a[k]);
    }
    
    printf("\n");
    
    return 0;
}
