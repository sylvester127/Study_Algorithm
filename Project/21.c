#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, b = 1, i, j;

	scanf_s("%d", &a);

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			printf("%d ", b);
			b++;
		}
		printf("\n");
	}
	return 0;
}