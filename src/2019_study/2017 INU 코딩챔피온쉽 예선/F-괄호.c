//
//  F.c
//  Algorithm
//
//  Created by Naram Kim on 2017. 5. 13..
//  Copyright © 2017년 Naram Kim. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "FileIO.h"
char ary[64];

int main()
{
    FileIO();
    int t;
    scanf("%d", &t);
    
    for(int i=0;i<t;i++)
    {
        int cnt = 0;
        scanf("%s", ary);
        
        for(int j=0;j<=strlen(ary)-1;j++)
        {
            if(ary[j] == '(')
                cnt++;
            else if(ary[j] == ')')
                cnt--;
        }
        
        if(cnt == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
