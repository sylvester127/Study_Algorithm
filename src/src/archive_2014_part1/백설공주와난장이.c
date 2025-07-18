#include <stdio.h>
#include <stdlib.h>

int compare(const int *a, const int *b)
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

	int tall[7];

	for (int i = 0; i < 7; i++)
		scanf_s("%d", &tall[i]);

	qsort(tall, sizeof(tall) / sizeof(int), sizeof(int), compare);

	for(int i =6;i>=5;i--)
		printf("%d\n", tall[i]);

	return 0;
}
