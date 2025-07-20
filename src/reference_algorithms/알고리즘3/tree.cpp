#include <stdio.h>

#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int n, B[20001], AA[20001], A[20001], Rev[20001], C[20001];

void Perm(int x)
{
	int i, j;

	if (x>n)
	{
		printf("%d\n", n);
		for (i = 1; i <= n; i++) printf("%d\n", A[i]);
		exit(0);
	}

	if (A[x]) Perm(x + 1);
	for (j = 1; j <= n; j++)
	{
		if (C[j]) continue;

		if (j == x)
		{
			if (AA[x] == x)
			{
				A[x] = j; C[j] = 1;
				Perm(x + 1);
				A[x] = 0; C[j] = 0;
			}
			if (AA[x] != x) continue;
		}
		else
		{
			int p = x, q = j, r = Rev[q];
			while (!A[p] && !C[q])
			{
				A[p] = q; C[q] = 1;
				int tp = r, tq = p, tr = Rev[tq];
				p = tp, q = tq, r = tr;
			}

			if (A[p] == q) Perm(x + 1);

			bool sw = 1;
			p = x, q = j, r = Rev[q];
			while (!sw && p != x)
			{
				sw = 0;
				A[p] = 0; C[q] = 0;
				int tp = r, tq = p, tr = Rev[tq];
				p = tp, q = tq, r = tr;
			}
		}
	}
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int i;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &B[i]);
		AA[B[i]] = i;
		Rev[i] = B[i];
	}

	Perm(1);
	printf("0");

	return 0;
}
/*
int A[20001] = { 0 };
int B[20001] = { 0 };

int main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a; 
	int i, j;
	int cnt;
	scanf("%d", &a);

	for (i = 1; i <= a; i++)
	{
		scanf("%d", &B[i]);
	}
	cnt = 1;

	for (i = a; i > a-1; i--)
	{
		A[cnt] = B[i];
	}

	cnt++;
	for (i = 1; i <= a-1; i++)
	{
		A[cnt] = B[i];
		cnt++;
	}
	printf("%d\n", a);
	for (i = 1; i <= a; i++)
	{
		
		printf("%d", A[i]);
		printf("\n");
	}
}
*/