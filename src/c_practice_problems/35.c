#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, b, i, j;

	scanf_s("%d %d", &a, &b);

	for (int i = a; i < b; i++)
	{
		for (int j = 2; j <= i - 1; j++) 
		{
			if (i % j == 0) 
				break;
		}
		if (i == j) 
			printf("%d ", i);
	}
	return 0;
}