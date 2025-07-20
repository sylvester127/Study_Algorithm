#include <stdio.h>
#include <math.h>
int main(void)
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m, i, j,k=0;
	int N[10000] = { 0 }, M[10000] = { 0 };
	int ManSum[10000] = { 0 };
	int cnt = 0;
	int rmin = 0;
	int min[10000] = { 0 };
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &N[i]);
	}
	for (j = 0; j < m; j++)
	{
		scanf("%d", &M[j]);
	}
	i = 0;
	min[0] = { 987654321 };
	while (1)
	{
		if (cnt == m)break;
		if (i == n) {
			i = 0;
			cnt++;
			for (j = k; j < n; j++)
			{
				if (min[k] > ManSum[j])
					min[k] = ManSum[j];
				if (j == n - 1) {
					k++;
					if (min[k] == 0)
						min[k] = { 987654321 };
				}
			}
		}
		ManSum[i] = N[i] - M[cnt];
		if (ManSum[i] < 0) {
			ManSum[i] = abs(ManSum[i]);
		}
		i++;
	}
	for (i = 0; i < m; i++)
	{
		rmin += min[i];
	}
	printf("%d", rmin);
}