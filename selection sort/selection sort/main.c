//
//  main.c
//  selection sort
//
//  Created by Sovichea Socheat on 2020/1/14.
//  Copyright © 2020 Sovichea Socheat( Pan Zhineng). All rights reserved.
//

#include <stdio.h>

/* selection sort :  compare the a[0] with remain number
 if it less than all of it, do not swap.
 else we swap it.
 and then repeat the step to find the second lowest number in the array and so on till the end of the array
 */


int main(int argc, const char * argv[]) {
    // insert code here...
    int a[10], i, j, min, temp, flag;
    for ( i = 0 ; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    
    
    for ( i = 0; i < 9; i++) // we compare the first number to the next number, and the last number just leave it there, cuz it will be the                             laragest
    {
        min = i;
        for ( j = i + 1; j < 10; j++)
        {
            if ( a[min] > a[j]){    // find the lowest number
                min = j;
            }
        }                                   // the lowest number swap with a[i]
                                    
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
        
        
    }
    
    puts("after sorted:");
    
    for ( i = 0, flag = 0; i < 10; i++)
    {
        printf("%5d", a[i]);
        flag++;
        if ( flag == 5)
        {
            putchar('\n');
            flag = 0;
        }
    }
    
        
    
    
    return 0;
}
