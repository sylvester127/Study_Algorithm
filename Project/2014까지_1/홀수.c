#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, sum = 0, min = 999, flag = 0;

	for (int i = 0; i < 7; i++)
	{
		scanf_s("%d", &n);

		if (n % 2 == 1)
		{
			sum += n;
			if (min >= n)
				min = n;
			flag = 1;
		}	
	}
	if (flag == 0)
		printf("-1");
	else
		printf("%d %d", sum, min);
	return 0;
}