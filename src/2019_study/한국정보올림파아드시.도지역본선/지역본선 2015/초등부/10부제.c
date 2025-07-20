//
//  10부제.c
//  Algorithm
//
//  Created by Naram Kim on 2017. 6. 27..
//  Copyright © 2017년 Naram Kim. All rights reserved.
//

#include <stdio.h>
#include "FileIO.h"

int main()
{
    FileIO();
    int n,car,cnt=0;
    scanf("%d",&n);
    
    for(int i=0;i<5;i++)
    {
        scanf("%d",&car);
        
        if(n==car)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}
