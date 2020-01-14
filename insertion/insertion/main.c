//
//  main.c
//  insertion
//
//  Created by Sovichea Socheat on 2020/1/14.
//  Copyright © 2020 Sovichea Socheat( Pan Zhineng). All rights reserved.
//

#include <stdio.h>

// insertion sort
/*  assume that an array of numbers is sorted by increased order.
    we want to insert a number into the array and obey the increased order.
    the solution is:
    1.if the num is greater than the last number in the array, we insert it after the last number of the array
    2. if the num is less than the last number in the array, we need to compare it with a[0] ~ a[n-1]
    until a[i] > num.
    
    when a[i] > num happen, it means a[0]~a[i-1] is less then num , and a[i] ~ a[n-1] is greater than num
 
    3. so we insert num to the position after a[i-1] and before a[i].
 */

#define MAX 100

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a[MAX], n, i, j, temp1, temp2, number, end;
    
    scanf("%d", &n); // input the amount of number u want array to have
    
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &number); // scan the number u want to insert
    
    printf("insert %d", number);
    
    printf(" array:\n");
    
    for ( i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
    
    putchar('\n');
    
    end = a[n-1]; // end = the last number in the array
    
    if ( number > end)
        a[n+1] = number;
    else
    {
        for ( i = 0; i < n; i++)
        {
            if ( a[i] > number)
            {
                temp1 = a[i];
                a[i] = number;
                
                for ( j = i + 1; j < n+ 1; j++){
                    temp2 = a[j];
                    a[j] = temp1;
                    temp1 = temp2;
                }
                break;
            }
        }
    }
    
    printf("Now new array is:\n");
    for ( i=0;i<n+1;i++){
        printf("%5d", a[i]);
    }
    printf("\n");
    
    
    return 0;
}
