#include <stdio.h>
#define N 12
int arr[N][N];

void q(int num, int h, int w)
{
	int i, j, temph, tempw;

	for (int i = 1; i <= 9; i++)	// üũ
	{
		if (arr[i][w] == num || arr[h][i] == num)
			return;
	}

	for (int i = h - (h - 1) % 3; i <= h - (h - 1) % 3 + 2; i++)	//簢 üũ
	{
		for (int j = w - (w - 1) % 3; j <= w - (w - 1) % 3 + 2; j++)
		{
			if (arr[i][j] == num)
				return;
		}
	}
	/////////////////////////////////////////////////////////////
	arr[h][w] = num;	//Ʈ

	if (h == 9 && w == 9)
	{
		for (int i = 1; i <= 9; i++)
		{
			for (int j = 1; j <= 9; j++)
			{
				printf("%3d", arr[i][j]);
			}
			printf("\n");
		}
		arr[9][9] = 0;	//
		printf("\n");
		return;
	}

	for (int i = 1; i <= 9; i++)	//
	{
		temph = h;
		tempw = w;

		while (1)	// ã temph, tempw
		{
			if (tempw == 9) 
			{
				temph++; 
				tempw = 1; 
			}
			else tempw++;

			if (arr[temph][tempw] == 0)
				break;
		}
		q(i, temph, tempw);
	}
	arr[h][w] = 0;	//
}

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);
	
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
			scanf_s("%d", &arr[i][j]);
	}
	
	for (int i = 1; i <= 9; i++)
		q(i, 1, 1);

	return 0;
}