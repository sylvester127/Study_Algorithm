#include <stdio.h>
#include <string.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, i, j;

	scanf_s("%d", &a);

	for (i = 0; i <= a; i++)
	{
		for (j = a; i < j; j--)
		{
			printf(" ");
		}

		for (j = 1; j < 2*i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}