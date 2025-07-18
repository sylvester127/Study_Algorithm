#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, arr[10][30];
	int i, j;

	scanf_s("%d", &n);

	if (n > 10)
		return 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			arr[i][j] = 0;
		}
	}
	arr[0][15] = 1;

	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < 25; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			if (arr[i][j]==0)
			{
				printf("   ");
				continue;
			}
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}