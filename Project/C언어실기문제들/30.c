#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a[10], max = 0, min = 100, i;

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
		if (a[i] >= max)
			max = a[i];
		if (a[i] <= min)
			min = a[i];
	}
	printf("%d %d", max, min);
	return 0;
}