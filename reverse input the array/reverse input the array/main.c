//
//  main.c
//  reverse input the array
//
//  Created by Sovichea Socheat on 2020/1/14.
//  Copyright © 2020 Sovichea Socheat( Pan Zhineng). All rights reserved.
//

#include <stdio.h>

#define MAX 100
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int i, n, a[MAX], temp;
    
    scanf("%d", &n);
    
    for ( i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    for ( i = 0; i < n/2; i++){
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    
    for ( i = 0; i < n; i++){
        printf("%5d", a[i]);
    }
    putchar('\n');
    
    return 0;
}
