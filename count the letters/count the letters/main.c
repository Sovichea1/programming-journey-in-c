//
//  main.c
//  count the letters
//
//  Created by Sovichea Socheat on 2020/1/14.
//  Copyright © 2020 Sovichea Socheat( Pan Zhineng). All rights reserved.
//

#include <stdio.h>
#include <ctype.h>


#define MAX 80

int main(int argc, const char * argv[]) {
    
    char str[3][MAX];
    int i,j;
    int upper = 0, lower = 0, space= 0, number = 0,other = 0;
    
    
    for ( i = 0;i < 3; i++)
    {
        
        gets(str[i]);// get the input string
        
        for ( j = 0; j < 80 && str[i][j] != '\0'; j++) // if str have not ended yet, mean not equal to null                                                 terminator
        {
            if ( isupper(str[i][j]))
                upper++;
            else if ( islower(str[i][j]))
                lower++;
            else if ( isblank(str[i][j]))
                space++;
            else if ( isnumber(str[i][j]))
                number++;
            else
                other++;
            
        }
    }
    
    printf("upper case: %d\n",upper);
    printf("lower case: %d\n",lower);
    printf("space: %d\n", space);
    printf("number: %d\n", number);
    printf("others: %d\n",other);
    
    
    
    
    return 0;
}
