//
//  개미.c
//  Algorithm
//
//  Created by Naram Kim on 2017. 11. 29..
//  Copyright © 2017년 Naram Kim. All rights reserved.
//

#include <stdio.h>
#include "FileIO.h"

int main()
{
    FileIO();
    int w, h, p ,q, t;
    int x, y;
    scanf("%d %d", &w ,&h);
    scanf("%d %d", &p, &q);
    scanf("%d", &t);
    
    x = (p + t) / w;
    y = (q + t) / h;
    
    if(x % 2 == 0)
        p = (p + t) % w;
    else
        p = w - ((p + t) % w);
    
    if(y % 2 == 0)
        q = (q + t) % h;
    else
        q = h - ((q + t) % h);
    
    printf("%d %d", p, q);
    return 0;
}
