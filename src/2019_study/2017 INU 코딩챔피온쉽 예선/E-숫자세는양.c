//
//  E.c
//  Algorithm
//
//  Created by Naram Kim on 2017. 5. 13..
//  Copyright © 2017년 Naram Kim. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include "FileIO.h"
int check[16];

int main()
{
    FileIO();
    int N,t,x;
    scanf("%d", &t);
    
    for(int i=1; i<=t;i++)
    {
        scanf("%d",&N);
        
        if(N==0)
        {
            printf("Case #%d: INSOMNIA\n",i);
            continue;
        }
        
        int j=0;
        while(1)
        {
            int temp;
            x = (j+1)*N;
            temp = x;
            
            while(temp > 0)
            {
                if(temp == 0)
                    break;
                check[temp%10]++;
                temp = temp/10;
            }
            
            if(check[0]!=0&&check[1]!=0&&check[2]!=0&&check[3]!=0&&check[4]!=0&&
               check[5]!=0&&check[6]!=0&&check[7]!=0&&check[8]!=0&&check[9]!=0)
                break;
            j++;
        }
        
        printf("Case #%d: %d\n",i,x);
        for(int k=0;k<10;k++)
            check[k]=0;
    }
    return 0;
}
