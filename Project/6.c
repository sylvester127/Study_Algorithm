#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a;

	scanf_s("%d", &a);
	printf("%d", a / 3 * 4);
	return 0;
}