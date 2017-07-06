#include <stdio.h>
#define N 10+1
int mai()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int card[N], n, k, len, cnt = 0;

	scanf_s("%d %d", &n, &k);;

	len = k;

	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &card[i]);
	}

	do
	{
		
	}
}