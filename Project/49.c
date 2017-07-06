#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, i, j, num;

	scanf_s("%d", &n);
	num = n*n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%2d ", num);
			num -= n;
		}
		printf("\n");
		num = n*n - (i + 1);
	}
	return 0;
}