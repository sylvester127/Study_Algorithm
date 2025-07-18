#include <stdio.h>
#define N 10

int n, A[N][N], R[N][N], Max = 0, check[N*N], tot;



q(int y, int x, int cnt)
{
	check[cnt] = A[y][x];

	if (x == 1 && y == 1)
	{
		for (int i = cnt; i >= 1; i--)
		{

		}
	}

	for()
}

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	
	int y, x;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			scanf_s("%d", &A[i][j]);
	}

	for (y = 1; y <= n; y++)
	{
		for (x = 1; x <= n; x++)
		{
			Max = 0;
			for (int i = 1; i < y; i++)
				if (A[y][x] > A[i][x] && Max < R[i][x])
					Max = R[i][x];
			for (int i = 1; i < x; i++)
				if (A[y][x] > A[y][i] && Max < R[y][i])
					Max = R[y][i];
			R[y][x] = Max + 1;
		}
	}

	q1(n, n, tot);
	q(n, n, 1);

	return 0;
}