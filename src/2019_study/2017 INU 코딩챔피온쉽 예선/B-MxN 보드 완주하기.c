//
//  B.c
//  Algorithm
//
//  Created by Naram Kim on 2017. 5. 14..
//  Copyright © 2017년 Naram Kim. All rights reserved.
//

#include <stdio.h>
#include "FileIO.h"
#define M 32
#define N 32
char bord[M][N];

int main()
{
    FileIO();
    int m,n;
    scanf("%d %d",&m,&n);
    getchar();
    
    // 입력
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%c",&bord[i][j]);
        getchar();
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(bord[i][j] == '*')
                continue;
            
        }
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%c",bord[i][j]);
        printf("\n");
    }
    return 0;
}
