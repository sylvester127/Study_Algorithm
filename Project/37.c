#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, max = 0, min = 999;

	while (scanf_s("%d",&a)!=EOF)
	{
		if (a >= max)
			max = a;
		if (a <= min)
			min = a;
	}
	printf("%d", max - min);
	return 0;
}