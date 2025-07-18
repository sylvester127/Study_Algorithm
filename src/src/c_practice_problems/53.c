#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, i, j, num;

	scanf_s("%d", &n);

	if (n > 9)
		return 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = n; i < j; j--)
		{
			printf(" ");
		}
		num = 0;
		for (int j = 0; j < (2 * i) - 1; j++)
		{
			if (j < i)
				num++;
			else
				num--;
			printf("%d", num);
		}
		
		printf("\n");
	}
	return 0;
}