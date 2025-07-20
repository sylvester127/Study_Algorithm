#include <stdio.h>
#include "FileIO.h"

int main()
{
    FileIO();
	int a, b;

	scanf("%d %d", &a, &b);

	if ((a + b) >= 140)
		printf("%d 합격", a + b);
	else
		printf("%d 불합격", a + b);

	return 0;
}
