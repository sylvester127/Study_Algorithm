#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, b, i;

	scanf_s("%d %d", &a, &b);
	
	for (i = a; i <= b; i++)
	{
		if (((i % 10) == 3) || ((i % 10) == 6) || ((i % 10) == 9))
			printf("%d\n", i);
	}
	return 0;
}