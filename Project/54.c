#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int N;
	int **arr;
	int i, j;
	scanf_s("%d", &N);

	arr = (int**)malloc(sizeof(int*)*N);
	for (i = 0; i < N; i++)
	{
		arr[i] = (int*)malloc(sizeof(int)*N);
	}

	for (i = 0; i < N; i++)
	{

	}
}