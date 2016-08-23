#include <stdio.h>
#include <stdlib.h>
#define N 100
typedef struct NODE
{
	int x;
	int y;
	NODE *next;
}NODE;

NODE *matrix[N];
static int i, j, n, Arr[100][100], room;

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	for (i = 0; i < N; i++)
	{
		matrix[i] = (NODE*)malloc(sizeof(NODE));
		matrix[i]->next = NULL;
	}

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			scanf_s("%d", &Arr[i][j]);
			room = Arr[i][j];

			NODE *temp = (NODE*)malloc(sizeof(NODE));
			temp->next = matrix[room]->next;
			matrix[room]->next = temp;
			temp->x = j;
			temp->y = i;
		}
	}

	NODE *dir;
	for (i = n; i >= 1; i--)
	{
		for (dir = matrix[i]->next; dir; dir = dir->next)
		{

		}
	}
}

void q(int x, int y, int L)
{
	int C[100][3];

	C[L][0] = y;
	C[L][1] = x;
	C[L][2] = Arr[y][x];

	if(Arr[][])
}