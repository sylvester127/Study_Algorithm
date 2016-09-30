#include <stdio.h>
#include <stdlib.h>

static int N, num = 1, **arr;
static char dir = 'r';
static int i, j;

void q(int y, int x)
{
	arr[y][x] = num;
	num++;

	if (num == (N*N) + 1)
		return;

	switch (dir)
	{
	case 'r':
		if (x + 1 == N || arr[y][x + 1] != 0)
		{
			dir = 'd';
			q(y + 1, x);
		}
		else
		{
			q(y, x + 1);
		}
		break;
	case 'd':
		if (y + 1 == N || arr[y + 1][x] != 0)
		{
			dir = 'l';
			q(y, x - 1);
		}
		else
		{
			q(y + 1, x);
		}
		break;
	case 'l':
		if (x - 1 == -1 || arr[y][x - 1] != 0)
		{
			dir = 'u';
			q(y - 1, x);
		}
		else
		{
			q(y, x - 1);
		}
		break;
	case 'u':
		if (y - 1 == 0 || arr[y - 1][x] != 0)
		{
			dir = 'r';
			q(y, x + 1);
		}
		else
		{
			q(y - 1, x);
		}
		break;
	default:
		break;
	}
}

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	scanf_s("%d", &N);

	arr = (int**)malloc(sizeof(int*)*N);

	for (i = 0; i < N; i++)
	{
		arr[i] = (int*)malloc(sizeof(int)*N);
		
		for (j = 0; j < N; j++)
		{
			arr[i][j] = 0;
		}
	}

	q(0, 0);

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}