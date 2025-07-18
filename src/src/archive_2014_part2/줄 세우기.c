#include <stdio.h>
#include <stdlib.h>
#define N 101

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, num[N][2];
	
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &num[i][0]);
		num[i][1] = i;
	}

	for (int i = 1; i <= n; i++)
	{
		if (num[i][0] == 0)
			continue;

		for (int j = 0; j < num[i][0]; j++)
		{
			int temp;

			temp = num[i - j][1];
			num[i - j][1] = num[i - 1 - j][1];
			num[i - 1 - j][1] = temp;
		}
	}

	for (int i = 1; i <= n; i++)
		printf("%d ", num[i][1]);

	return 0;
}