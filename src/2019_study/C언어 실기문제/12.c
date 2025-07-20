#include <stdio.h>
#include "FileIO.h"

int main()
{
    FileIO();
	int a, b, c, sum = 0, avr = 0;

	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	avr = sum / 3;

	switch (avr/10)
	{
	case 10:
	case 9:
		printf("%d %d 수", sum, avr);
		break;
	case 8:
		printf("%d %d 우", sum, avr);
		break;
	case 7:
		printf("%d %d 미", sum, avr);
		break;
	case 6:
		printf("%d %d 양", sum, avr);
		break;
	default:
		printf("%d %d 가", sum, avr);
		break;
	}
	return 0;
}
