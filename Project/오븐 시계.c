#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	/*int hour, min, cook, carry;

	scanf_s("%d %d", &hour, &min);
	scanf_s("%d", &cook);

	min += cook;

	if (min >= 60)
	{
		carry = min / 60;
		min %= 60;
		hour += carry;
		if (hour>=24)
		{
			hour %= 24;
		}
	}
	printf("%d %d", hour, min);
	return 0;*/

	int hour, min, cook;

	scanf_s("%d %d", &hour, &min);
	scanf_s("%d", &cook);

	min += (hour * 60);
	min += cook;

	printf("%d %d", (min / 60) % 24, min % 60);
	return 0;
}