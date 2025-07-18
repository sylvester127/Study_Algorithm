#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, sum = 0;

	while (1)
	{
		scanf_s("%d", &a);
		if (a == 0)
			break;

		if (a > 0)
			sum += a;
		else
			sum += -a;
	}
	printf("%d", sum);
	return 0;
}