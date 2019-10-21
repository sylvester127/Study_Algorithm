#include <stdio.h>
#define N 10

int AB[N][N], AR[N][N], check[N], Sum[N];
int n, k;

void q(int s)
{
	for (int i = 1; i <= n; i++)
	{
		check[s] = 1;
		if (AB[s][i] == 1 && check[i] == 0)
			q(i);
	}
}

void q1(int s)
{
	for (int i = 1; i <= n; i++)
	{
		check[s] = 1;
		if (AR[s][i] == 1 && check[i] == 0)
			q1(i);
	}
}
int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "input.txt", "w", stdout);	

	scanf_s("%d", &n);

	int a, b, count = 0;

	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d %d", &a, &b);
		AB[b][a] = 1;
		AR[a][b] = 1;
	}

	//정방향
	for (int i = 1; i <= n; i++)
	{
		q(i);

		for (int j = 1; j <= n; j++)
		{
			if (check[i] == 1)
				check[j] = 0;
		}
		Sum[i] += (count - 1);
	}

	//역방향
	for (int i = 1; i <= n; i++)
	{
		q1(i);

		for (int j = 1; j <= n; j++)
		{
			if (check[i] == 1)
				check[j] = 0;
		}
		Sum[i] += (count - 1);
	}

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", n - (Sum[i] + 1));
	}
	return 0;
}