#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	float a[10], min = 999, diff, result;
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf_s("%f", &a[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (0 > a[i])
		{
			diff = 0 - a[i];
		}
		if (0 < a[i])
		{
			diff = a[i] - 0;
		}
		if (diff < min) {
			min = diff;
			result = a[i];
		}
	}
	printf("%.1f", result);
	return 0;
}