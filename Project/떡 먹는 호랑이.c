#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, b, c, D, K;

	scanf_s("%d %d", &D, &K);

	if (D < 3 && D>30 && K < 10 && K>100000)
	{
		printf("입력 오류");
		return 0;
	}

	for (int i = 1; i <= K; i++)
	{
		a = i;
		for (int j = i + 1; j <= K; j++)
		{
			b = j;
			int tempA = a;
			int tempB = b;
			int k;
			for (k = 3; k <= D; k++)
			{
				c = tempA + tempB;
				if (c == K || c > K) break;
				tempA = tempB;
				tempB = c;
			}
			if (c == K && k == 6)
				break;
		}
		if (c == K)
			break;
	}
	printf("%d\n%d", a, b);
	return 0;
}