#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);
	
	int cnt = 1, flag = 1;
	int C, R, K;	//가로: C, 세로: R, K: 대기순서
	int x = 1, y = 1;
	scanf_s("%d %d", &C, &R);
	scanf_s("%d", &K);

	if (K > C*R)
	{
		printf("0");
		return 0;
	}

	while (1)
	{
		for (int i = 1; i < R; i++)
		{
			if (cnt == K)
			{
				printf("%d %d", x, y);
				return 0;
			}
			if (flag == 1)
				y++;
			else
				y--;
			cnt++;
		}

		for (int i = 1; i < C - 1; i++)
		{
			if (cnt == K)
			{
				printf("%d %d", x, y);
				return 0;
			}
			if (flag == 1)
				x++;
			else
				x--;
			cnt++;
		}
		R--;
		C--;
		flag *= -1;
	}
}