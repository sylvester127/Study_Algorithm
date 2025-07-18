#include <stdio.h>
#define N 20

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, arr[N];

	for (int i = 1; i < N; i++)
	{
		arr[i] = 0;
	}

	while (1)
	{
		scanf_s("%d", &a);
		if (a == 0)
			break;

		arr[a] += 1;
	}

	while (1)
	{
		scanf_s("%d", &a);
		if (a == 0)
			break;

		arr[a] += 1;
	}

	for (int i = 1; i < N; i++)
	{
		if (arr[i] == 2)
			printf("%3d", i);
	}

	printf("\n");

	for (int i = 1; i < N; i++)
	{
		if(arr[i] != 0)
			printf("%3d", i);
	}
	return 0;
}