#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, i;

	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		if (a%i == 0)
			printf("%d ", i);
	}
	return 0;
}