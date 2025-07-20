#include <stdio.h>
#include "FileIO.h"
int main()
{
    FileIO();
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d %d", a * b / 2, a*b);
	return 0;
}
