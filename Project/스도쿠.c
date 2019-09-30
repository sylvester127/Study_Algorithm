#include <stdio.h>
#define N 12
int arr[N][N];

void q(int num, int h, int w)
{
	int i, j, temph, tempw;

	for (i = 1; i <= 9; i++)	//행렬 체크
	{
		if (arr[i][w] == num || arr[h][i] == num)
			return;
	}

	for (i = h - (h - 1) % 3; i <= h - (h - 1) % 3 + 2; i++)	//정사각형 체크
	{
		for (j = w - (w - 1) % 3; j <= w - (w - 1) % 3 + 2; j++)
		{
			if (arr[i][j] == num)
				return;
		}
	}
	/////////////////////////////////////////////////////////////
	arr[h][w] = num;	//라이트

	if (h == 9 && w == 9)
	{
		for (i = 1; i <= 9; i++)
		{
			for (j = 1; j <= 9; j++)
			{
				printf("%3d", arr[i][j]);
			}
			printf("\n");
		}
		arr[9][9] = 0;	//리셋
		printf("\n");
		return;
	}

	for (i = 1; i <= 9; i++)	//엔진
	{
		temph = h;
		tempw = w;

		while (1)	//빈공간 찾기 temph, tempw
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
	arr[h][w] = 0;	//리셋
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