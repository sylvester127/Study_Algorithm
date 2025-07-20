//
//  G.c
//  Algorithm
//
//  Created by Naram Kim on 2017. 5. 13..
//  Copyright © 2017년 Naram Kim. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "FileIO.h"
int main()
{
    FileIO();
    
    while(1)
    {
        int input, output;
        char ch;
        scanf("%d %c %d",&input,&ch,&output);
        
        if(input == 0 && output == 0 && strcmp(&ch, "W") == 0)
            break;
        
        if(ch == 'W')
        {
            if(input-output < -200)
            {
                printf("Not allowed\n");
                continue;
            }
            printf("%d\n",input-output);
        }
        else if(ch == 'D')
        {
            printf("%d\n",input+output);
        }
    }
    return 0;
}
