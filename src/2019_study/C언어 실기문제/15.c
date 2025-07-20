#include <stdio.h>
#include "FileIO.h"
int main()
{
    FileIO();
	int weight, i = 0;
	float sum = 0;

	while (scanf("%d", &weight) != EOF)
	{
		if (weight >= 60) 
		{
			i++;
			sum = sum + weight;
		}
	}
	printf("%d\n%.2f", i, sum / i);
	return 0;
}
