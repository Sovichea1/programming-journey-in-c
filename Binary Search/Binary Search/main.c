//
//  main.c
//  Binary Search
//
//  Created by Sovichea Socheat on 2020/1/14.
//  Copyright © 2020 Sovichea Socheat( Pan Zhineng). All rights reserved.
//

#include <stdio.h>

#define MAX 100
int main(int argc, const char * argv[]) {
   
    int a[MAX], x, i,n, left, right, mid = 0,flag = 1;
    
    scanf("%d", &n);
   
    // input the elements
    for ( i =0; i<n;i++)
    {
        scanf("%d", &a[i]);
        
    }
    
    for ( i = 0; i < n; i++)
    {
        if ( i != 0 && a[i] < a[i-1]){
            printf("The array is not in the increasing order. we cannot use binary search!\n");
            flag = 0;
        }
           
        
    }
    
    
    if ( flag )
    {
        scanf("%d", &x);
           // search for x
           
        left = 0; right  = n - 1;
           
           while ( left <= right)
           {
               
               mid = ( left + right ) / 2;
               if ( a[mid] == x)
               {
                   
                   break;
               }
               
               else if ( x < a[mid]){
                   right = mid - 1;
               }
               else if ( x > a[mid])
               {
                   left = mid + 1;
               }
               
           }
           
           if ( left <= right )
           {
               printf("Found and the index is %d\n.", mid+1);
           }
           else
           {
               printf("Not Found!");
           }
    }
    
    else {
        return 0;
    }
   
    
    
    return 0;
}
