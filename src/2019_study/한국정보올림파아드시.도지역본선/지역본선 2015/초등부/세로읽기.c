//
//  세로읽기.c
//  Algorithm
//
//  Created by Naram Kim on 2017. 7. 3..
//  Copyright © 2017년 Naram Kim. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "FileIO.h"
char arr[8][16];
char str[128];

int main()
{
    FileIO();
    int maxSize = 0;    // 가장 긴 한줄의 길이
    
    for(int i = 0, temp; i < 5; i++)
    {
        scanf("%s",&arr[i]);
        
        temp = strlen(arr[i]);
        
        if( temp > size )
            maxSize = temp;
    }
    
    for(int j = 0; j < maxSize; j++)
    {
        for(int i = 0; i < 5; i++)
        {
            if(arr[i][j] != NULL)    // 공백문자 제외
            {
                printf("%c", arr[i][j]);
            }
        }
    }
    return 0;
}
