#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, sum = 0, i;

	scanf_s("%d", &a);

	if (a % 2 == 0)
	{
		for (int i = 2; i <= a; i = i + 2)
			sum += i;
	}
	else
	{
		for (int i = 1; i <= a; i = i + 2)
			sum += i;
	}
	printf("%d", sum);
	return 0;
}