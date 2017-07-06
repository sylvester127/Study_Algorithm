#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int N, P;
	int process[100], check[100];
	int start, end;
	scanf_s("%d %d", &N, &P);
	
	for (int i = 0; i < 100; i++)
		check[i] = 0;
	process[0] = N;
	
	for (int i = 1;; i++)
	{
		int next = process[i - 1] * N % P;
		process[i] = next;

		check[next]++;
		if (check[next] == 2)
		{
			end = i;
			for (int j = 0; j < end; j++)
			{
				if (process[j] == check[i])
				{
					start = j;
					for (int k = start; k < end; k++)
					{
						printf("%d", process[k]);
					}
				}
			}
		}
		return 0;
	}
	return 0;
}