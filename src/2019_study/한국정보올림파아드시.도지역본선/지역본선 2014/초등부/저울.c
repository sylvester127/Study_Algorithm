//
//  저울.c
//  Algorithm
//
//  Created by Naram Kim on 2017. 11. 30..
//  Copyright © 2017년 Naram Kim. All rights reserved.
//

#include <stdio.h>
#include "FileIO.h"
#define Num 8
int arr[Num][Num];

int main()
{
    FileIO();
    int N, M;
    scanf("%d %d", &N, &M);
    
    for(int i=1,x,y; i<=M; i++)
    {
        scanf("%d %d", &x, &y);
        arr[x][y] = 1;
    }
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(arr[j][i])
            {
                for(int k = 1; k <= N; k++)
                    if(arr[i][k]) arr[j][k] = 1;
            }
        }
    }
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    
    for (int i=1;i<=N;i++)
    {
        int count = 0;
        for (int j=1;j<=N;j++)
            if (i != j && arr[i][j] + arr[j][i] == 0)
                count++;
        printf ("%d\n",count);
    }
    
    return 0;
}
