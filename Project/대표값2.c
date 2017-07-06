#include <stdio.h>
#include <stdlib.h>

int compare(const int *a,const int *b)
{
	if (*a > *b)
		return 1;
	else if (*a < *b)
		return -1;
	else
		return 0;
}

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int num[5], avr, sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &num[i]);
		sum += num[i];
	}

	avr = sum / 5;
	qsort(num, sizeof(num) / sizeof(int), sizeof(int), compare);

	printf("%d\n%d", avr, num[2]);
}