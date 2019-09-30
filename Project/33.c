#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int year;

	scanf_s("%d", &year);

	if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)))
		printf("À±³â");
	else
		printf("Æò³â");
	return 0;
}