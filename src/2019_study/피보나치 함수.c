#include <stdio.h>
#include "FileIO.h"
int zero,one;

int fibonacci(int n);

int main()
{
    FileIO();
    int n;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        fibonacci(a);
        printf("%d %d\n",zero,one);
        zero = 0;
        one = 0;
    }
    return 0;
}

int fibonacci(int n) {
    if (n==0) {
        //printf("0");
        zero++;
        return 0;
    } else if (n==1) {
        //printf("1");
        one++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
