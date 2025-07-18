#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n;
	int i, j;
	
	scanf_s("%d", &n);

	if (n % 2 == 0)
		return 0;

	for (int i = 1; i <= n; i++)
	{
		if (i <= (n / 2) + 1)
		{
			for (int j = n; i < j; j--)
			{
				printf(" ");
			}

			for (int j = 0; j < (i * 2) - 1; j++)
			{
				printf_s("*");
			}
		}
		else
		{
			for (int j = 1; i > j; j++)
			{
				printf(" ");
			}
			for (int j = (i * 2) - 1; j <= n * 2 - 1; j++)
			{
				printf_s("*");
			}
		}
		printf("\n");
	}
	return 0;
}