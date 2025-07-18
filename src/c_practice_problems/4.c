#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, b, c, sum = 0, avr = 0;

	scanf_s("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	avr = sum / 3;

	printf("%d %d", sum, avr);
	return 0;
}