#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a[10], sum1 = 0, sum2 = 0, sum3 = 0, i;

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
		if (a[i] < 10)
			sum1 += a[i];
		else if (a[i] >= 10 && a[i] <100)
			sum2 += a[i];
		else
			sum3 += a[i];
	}
	printf("%d %d %d", sum1, sum2, sum3);
	return 0;
}