#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, b, c, d, e, f, g, h;

	scanf_s("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
	printf("%d", a + b + c + d + e + f + g + h);
	return 0;
}