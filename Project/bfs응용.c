#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	char a, b;
	int Graph[100][100], G[100], check[100], Q[100][100];
	int n, k, g, bun, work;
	int i, j;

	scanf_s("%d %d", &n, &k);
	
	for (i = 1; i < k; i++)
	{
		scanf_s("\%c %c", &a, &b);
		Graph[a - 64][b - 64];
		Graph[b - 64][a - 64];
	}

	for (i = 1; i < n; i++)
	{
		for (j = 1; j < j; j++)
		{
			check[j] = 0;
		}
		if (G[i] == NULL)
		{
			g++;
			G[i] = g;
		}
		Q[1][1] = i;
		Q[1][2] = 1;

		bun = 1;
		work = 0;
		check[i] = 1;
		while (1)
		{
			if (bun == work)
				break;

		}
	}

	return 0;
}