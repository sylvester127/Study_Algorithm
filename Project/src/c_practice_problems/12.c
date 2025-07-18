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

	switch (avr/10)
	{
	case 10:
	case 9:
		printf("%d %d ", sum, avr);
		break;
	case 8:
		printf("%d %d ", sum, avr);
		break;
	case 7:
		printf("%d %d ", sum, avr);
		break;
	case 6:
		printf("%d %d ", sum, avr);
		break;
	default:
		printf("%d %d ", sum, avr);
		break;
	}
	return 0;
}