#include <stdio.h>
#define N 10
int score[N][3], sum[3], check[2][2];

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, Max = 0, num;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
		sum[0] += score[i][0];
		sum[1] += score[i][1];
		sum[2] += score[i][2];
	}

	if (sum[0] != sum[1] && sum[1] != sum[2] && sum[2] != sum[0])
	{
		for (int i = 0; i < 3; i++)
		{
			if (Max < sum[i])
			{
				Max = sum[i];
				num = i + 1;
			}
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			if (sum[i] == sum[(i + 1) % 3])
			{
				if (sum[i] < sum[(i+2)%3])
				{
					Max = sum[(i + 2) % 3];
					num = i + 2;
				}
				else
				{
					Max = sum[i];
					for (int j = 1; j <= n; j++)
					{
						if (score[j][i] == 3)	check[0][0] += 1;
						if (score[j][(i + 1) % 3] == 3)	check[0][1] += 1;
						if (score[j][i] == 2)	check[1][0] += 1;
						if (score[j][(i + 1) % 3] == 2)	check[1][1] += 1;
					}

					if (check[0][0] > check[0][1])	num = i;	
					else if (check[0][0] < check[0][1])	num = (i + 1) % 3;
					else
					{
						if (check[1][0] > check[1][1])	num = i;
						else if (check[1][0] < check[1][1])	num = (i + 1) % 3;
						else	num = 0;
					}
				}
			}
		}
	}
	printf("%d %d %d\n", sum[0], sum[1], sum[2]);
	printf("%d %d %d %d\n", check[0][0], check[0][1], check[1][0], check[1][1]);
	printf("%d %d", num, Max);

	return 0;
}