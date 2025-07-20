#include <stdio.h>
#include <math.h>
#include "FileIO.h"
#define PI 3.14

int main()
{
    FileIO();
	int r;

	scanf("%d", &r);
	printf("%.2f %.2f", 2 * r*PI, pow(r, 2)*PI);
	return 0;
}
