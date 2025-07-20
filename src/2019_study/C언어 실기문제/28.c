#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, sum = 0;

	scanf_s("%d", &a);
	sum = (a / 100) + (a % 100) / 10 + (a % 100 % 2);
	printf("%d", sum);
	
	return 0;
}