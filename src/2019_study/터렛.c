#include <stdio.h>
#include <math.h>
#include "FileIO.h"

int main()
{
    FileIO();
    int x1, y1, r1, x2, y2, r2, n;
    double d;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        d = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        
        if(x1 ==x2 && y1 ==y2 && r1==r2)
            printf("-1\n");
        else if(abs(r1-r2) < d && r1+r2 > d)
            printf("2\n");
        else if((abs(r1-r2) == d) || r1+r2 == d)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
