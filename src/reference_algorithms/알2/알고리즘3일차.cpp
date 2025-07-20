#include <stdio.h>

int n, m, input[10001], st, ed, sum;
__int64 res;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int N, M, X;
	int i, j;
	scanf("%d %d", &N, &M);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &input[i]);
	}
	st = 1, ed = 1, sum = input[1];
	while (st <= ed && ed <= n)
	{
		if (sum<m) sum += input[++ed];
		else if (sum>m) sum -= input[st++];
		else
		{
			sum += input[++ed];
			res++;
		}
	}

	printf("%I64d", res);

	

	
}