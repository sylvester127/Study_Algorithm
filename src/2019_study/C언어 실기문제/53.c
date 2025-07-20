#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, **arr, count = 1;
	int i, j, x, y, tempx, tempy;

	scanf_s("%d", &n);

	if (n % 2 == 0)
	{
		printf("����: ¦�� �Է�");
		return 0;
	}

	arr = (int**)malloc(sizeof(int*)*n);

	for (i = 0; i < n; i++)
	{
		arr[i] = (int*)malloc(sizeof(int)*n);

		for (j = 0; j < n; j++)
		{
			arr[i][j] = 0;
		}
	}

	x = n / 2;
	y = 0;

	for (i = 0; i < n*n; i++)
	{
		arr[y][x] = count;
		tempx = x;
		tempy = y;
		x++;
		y--;

		if (x > n - 1)
			x = 0;
		if (y < 0)
			y = n - 1;

		if (arr[y][x] != 0)
		{
			y = tempy + 1;
			x = tempx;
		}

		count++;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}