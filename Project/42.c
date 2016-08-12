#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, i, frequency[6];
	srand((unsigned)time(NULL));

	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		rand() % 6 + 1;
	}
	return 0;
}