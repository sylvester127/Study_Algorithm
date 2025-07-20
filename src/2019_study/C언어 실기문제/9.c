#include <stdio.h>
#include "FileIO.h"

int main()
{
    FileIO();
	int a, sum = 0;
	
	scanf("%d", &a);
	for (int i = 0; i <= a; i = i+3)
	{
			sum += i;
	}
	printf("%d", sum);
	return 0;
}
