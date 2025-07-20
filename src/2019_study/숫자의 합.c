#include <stdio.h>
#include <stdlib.h>
#include "FileIO.h"
char arr[128];
int sum;

int main()
{
    FileIO();
    int n;
    scanf("%d",&n);
    scanf("%s",arr);
    
    for(int i=0;i<n;i++)
    {
        char temp[2];
        temp[0] = arr[i];
        temp[1] = '\0';
        sum+=atoi(temp);
    }
    printf("%d",sum);
}
