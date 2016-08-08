#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, i;

	scanf_s("%d", &a);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", a, i, a*i);
	}
	return 0;
}