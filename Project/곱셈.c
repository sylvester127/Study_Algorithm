#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, b, ba, bb, bc;

	scanf_s("%d %d", &a, &b);

	ba = b / 100;
	bb = (b % 100) / 10;
	bc = b % 10;

	printf("%d\n%d\n%d\n", bc*a, bb*a, ba*a);
	printf("%d", bc*a + bb*a * 10 + ba*a * 100);
	return 0;
}