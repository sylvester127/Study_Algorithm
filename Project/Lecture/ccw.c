#include <stdio.h>
#include <stdlib.h>
#define N 10000

static int k;
static int arr[N][2], *check, crdntABC[3];
static int i, j;

typedef struct NODE
{
	int x, y;
	NODE *next;
}NODE;
NODE *crdnt[N];

int main()
{
	FILE *f;
	freopen_s(&f, "intput.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	scanf_s("%d", &k);

	for (i = 0; i < N; i++)
	{
		crdnt[i] = (NODE*)malloc(sizeof(NODE));
		crdnt[i]->next = NULL;
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N;j++)
		{
			scanf_s("%d %d", &arr[i][0], &arr[i][1]);
		}
	}
}