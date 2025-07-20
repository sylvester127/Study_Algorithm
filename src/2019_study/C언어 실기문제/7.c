#include <stdio.h>
#include "FileIO.h"

int main()
{
    FileIO();
    int a,b;
    
    scanf("%d %d", &a,&b);
    
    if (a >= b)
        printf("%d", a);
    else
        printf("%d", b);
    return 0;
}
