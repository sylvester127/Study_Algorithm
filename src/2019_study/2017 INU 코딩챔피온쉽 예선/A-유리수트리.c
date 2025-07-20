//
//  A.c
//  Algorithm
//
//  Created by Naram Kim on 2017. 5. 14..
//  Copyright © 2017년 Naram Kim. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "FileIO.h"
int i;
long double num,x,y;
long long int cnt=1;
char ary[128];

//int tree1(int p, int q, int l);
int tree2(long double p, long double q, int l);

int main()
{
    FileIO();
    int t, problem;
    scanf("%d", &t);
    
    for (i=1; i<=t; i++)
    {
        scanf("%d",&problem);
        
        if(problem == 1)
        {
            scanf("%Lf",&num);
            
            //tree1(1, 1, 0);
        }
        else
        {
            scanf("%Lf %Lf", &x, &y);
            num = x/y;
            tree2(1, 1, 0);
        }
        cnt=1;
        ary[0]='\n';
    }
    
    return 0;
}

/*int tree1(int p, int q, int l)
{
    cnt++;
    if(cnt == num)
    {
        printf("%d %d\n",p,q);
        return 0;
    }
    if(num)
    tree1(p, p+q, l+1);
    tree1(p+q, q, l+1);
}*/

int tree2(long double p, long double q, int l)
{
    if(num == p/q)
    {
        for(int k=0;k<strlen(ary);k++)
        {
            if(ary[k]=='r')
            {
                cnt=cnt+pow(2,k+1);
            }
            else
            {
                cnt=cnt+pow(2,k+1)-1;
            }
        }
        printf("Case #%d: lld\n",i, cnt);
        return 0;
    }
    if(num<p/q)
    {
        ary[l] = 'l';
        tree2(p, p+q, l+1);
    }
    else if(num>p/q)
    {
        ary[l] = 'r';
        tree2(p+q, q, l+1);
    }
    return 0;
}
