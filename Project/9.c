#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, i, sum = 0;
	
	scanf_s("%d", &a);
	for (i = 0; i <= a; i+3)
	{
			sum += i;
	}
	printf("%d", sum);
	return 0;
}