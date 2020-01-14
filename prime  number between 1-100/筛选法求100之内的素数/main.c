//
//  main.c
//  筛选法求100之内的素数
//
//  Created by Sovichea Socheat on 2020/1/14.
//  Copyright © 2020 Sovichea Socheat( Pan Zhineng). All rights reserved.
//

#include <stdio.h>
#include <math.h>


// we use the Eratoshenes method to find the prime number

// prime number is a number that can only be divided by 1 and itself. And 1 is not a prime number.

/* basically he will write all the number down from 1~100 and find the number that is not a prime and cross it out. Number he left with will be the prime number that he is finding
 */

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int i,j, n, a[101];
    
    for ( i = 1; i < 101; i++ ){
        a[i] = i;
    }
    a[1] = 0; // get rid of the 1, cuz 1 is not the prime number
    
    for ( i = 2; i<=sqrt(100); i++)   // loop through 2 ~ sqrt of 101
        for ( j = i + 1; j < 101; j++)
        {
            if ( a[i] != 0 && a[j] != 0)
                if ( a[j] % a[i] == 0)
                {
                    a[j] = 0; // equvalent to cross out in real life by assign 0 to it*** get rid of the number that can be divided by other number then its self
                }
        }
    
    printf("\n");
    
    for ( i = 2, n = 0; i < 101; i++)
    {
        
        if ( a[i] != 0)
        {
            printf("%5d", a[i]);
            n++;
        }
        
        if ( n == 10)
        {   // 10 number per line
            printf("\n");   // enter
            n = 0;          // start a new line
        }
        
        
        
    }
    
    putchar('\n');
    
    return 0;
}
