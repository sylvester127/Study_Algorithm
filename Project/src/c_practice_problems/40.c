#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int N, temp;
	int *arr;
	int i, j;

	scanf_s("%d", &N);

	arr = (int *)malloc(sizeof(int)*N);

	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - i; j++)
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
	}

	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);

	return 0;
}