#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int N, *arr;
	float sum = 1;
	int i;

	scanf_s("%d", &N);

	arr = (float*)malloc(sizeof(float)*N);
	for (i = 0; i < N; i++)
	{
		arr[i] = 2;
	}

	for (i = 0; i < N; i++)
	{
		sum = sum * arr[i];
	}
	printf("%.0f ", sum);
	return 0;
}