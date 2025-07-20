#include <stdio.h>
#include <math.h>
#include "FileIO.h"
#define N 64

typedef struct Planet
{
  int cx,cy,r;
}Planet;
Planet planet[N];

int main()
{
    FileIO();
    int x1,y1,x2,y2,t,n;
    
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int cnt = 0;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&n);
        
        for(int j=0;j<n;j++)
        {
            int d1, d2;
            scanf("%d %d %d",&planet[j].cx,&planet[j].cy,&planet[j].r);
            d1 = sqrt(pow(planet[j].cx-x1,2)+pow(planet[j].cy-y1,2));
            d2 = sqrt(pow(planet[j].cx-x2,2)+pow(planet[j].cy-y2,2));
            
            if(d1<planet[j].r&&d2<planet[j].r)
            {
                continue;
            }
            else if(d1<planet[j].r||d2<planet[j].r)
            {
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
