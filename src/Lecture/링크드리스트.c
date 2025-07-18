#include <stdio.h>
#include <stdlib.h>
#define N 6

typedef struct NODE
{
	int ballNum;
	NODE *next;
}NODE;

NODE *matrix[N];
static int i, n;

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	for (i = 0; i < N; i++)
	{
		matrix[i] = (NODE*)malloc(sizeof(NODE));
		matrix[i]->ballNum = -1;
		matrix[i]->next = NULL;
	}

	scanf_s("%d", &n);
	for (i=1;i<=n;i++)
	{
		

	}
}