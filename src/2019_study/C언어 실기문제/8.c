#include <stdio.h>
#include "FileIO.h"

int main()
{
    FileIO();
	int a;
    
	while (scanf("%d", &a) != EOF)
	{
		printf((a % 2 == 0) ? "짝수\n" : "홀수\n");
	}
	return 0;
}
