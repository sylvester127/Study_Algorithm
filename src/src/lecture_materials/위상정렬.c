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
static int n, room;
static int Arr[100][100], R[100][100], C[100][3];
static int i, j;

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	for (int i = 0; i < N; i++)
	{
		matrix[i] = (NODE*)malloc(sizeof(NODE));
		matrix[i]->next = NULL;
	}

	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
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
	int Max = 0;
	int X, Y, max, XX, YY;
	for (int i = n; i >= 1; i--)
	{
		for (dir = matrix[i]->next; dir; dir = dir->next)
		{
			X = dir->x;
			Y = dir->y;
			max = 0;

			if (Arr[Y][X - 1] > Arr[Y][X] && max < R[Y][X - 1])
				max = R[Y][X - 1];
			if (Arr[Y - 1][X] > Arr[Y][X] && max < R[Y][X - 1])
				max = R[Y - 1][X];
			if (Arr[Y][X + 1] > Arr[Y][X] && max < R[Y][X - 1])
				max = R[Y][X + 1];
			if (Arr[Y + 1][X] > Arr[Y][X] && max < R[Y][X - 1])
				max = R[Y + 1][X];

			R[Y][X] = max + 1;
			if (Max < max)
			{
				XX = X;
				YY = Y;
				Max = max;
			}
		}
	}
}

void q(int x, int y, int L)
{
	C[L][0] = y;
	C[L][1] = x;
	C[L][2] = Arr[y][x];

	if (Arr[y][x] == 1)
	{
		for (int i = 1; i <= L; i++)
		{
			printf("%d %d %d", C[i][0], C[i][1], C[i][2]);
		}
		printf("\n");
		return;
	}

	if (Arr[y][x] - 1 == Arr[y + 1][x])
		q(y + 1, x, L + 1);
	if (Arr[y][x] - 1 == Arr[y][x + 1])
		q(y, x + 1, L + 1);
	if (Arr[y][x] - 1 == Arr[y - 1][x])
		q(y - 1, x, L + 1);
	if (Arr[y][x] - 1 == Arr[y][x - 1])
		q(y, x - 1, L + 1);
}