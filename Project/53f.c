#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static int **arr;

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, sum;
	int i, j, k;

	scanf_s("%d", &n);

	if (n % 2 == 0)
		return 0;
	sum = (pow(n, 3) + n) / 2;
	arr = (int**)malloc(sizeof(int*)*n);
	for (i = 0; i < n; i++)
	{
		arr[i] = (int*)malloc(sizeof(int)*n);
	}

	arr[0][n / 2] = 1;
	for (i = 1; i < sum; i++)
	{
		
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	}
}

void q(int x,int y)
{
	int X, Y;
	X = x + 1;
	Y = y - 1;

	if (arr[X][Y] == NULL)
	{
		do
		{
			arr[][]
			if()
		} while (1);
	}
}