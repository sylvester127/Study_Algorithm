#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, b, c, max = 0;

	scanf_s("%d %d %d", &a, &b, &c);

	if (a >= b)
	{
		max = a;
		if (max < c)
			max = c;
	}
	else
	{
		max = b;
		if (max < c)
			max = c;
	}
	printf("%d", max);
	return 0;
}