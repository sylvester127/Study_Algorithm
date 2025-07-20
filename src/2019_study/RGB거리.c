#include <stdio.h>
#include <stdlib.h>
#include "FileIO.h"
#define N 1010
int RBG[N][4], sum, check[N];

int cmp(const int *i, const int *j)
{
    if(*i>*j) return 1;
    else if(*i-><*j) return -1;
    else return 0;
}

int main()
{
    FileIO();
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        int min = 987654321;
        scanf("%d %d %d",&RBG[i][1],&RBG[i][2],&RBG[i][3]);
        
        qsort(RBG[i], sizeof(RBG[i])/sizeof(int), sizeof(int), cmp);
        
        for(int j=1;j<=n;j++)
            printf("%d ",RBG[i][j]);
        printf("\n");
    }
    return 0;
}

