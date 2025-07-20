#include <stdio.h>
#pragma warning(disable:4996)
int A[12][12];
void q(int num, int h, int w)
{
	int i, j, h1, w1;
	for (i = 1; i <= 9; i++) {
		if (A[h][i] == num || A[i][w] == num)return;
	}
	for (i = h - (h - 1) % 3; i <= h - (h - 1) % 3 + 2; i++) {
		for (j = w - (w - 1) % 3; j <= w - (w - 1) % 3 + 2; j++) {
			if (A[i][j] == num)return;
		}
	}
	A[h][w] = num;
	if (h == 9 && w == 9) {
		for (i = 1; i <= 9; i++) {
			for (j = 1; j <= 9; j++) {
				printf("%3d", A[i][j]);
			}
			printf("\n");
		}
		A[9][9] = 0;
		printf("\n");
		return;
	}
	for (i = 1; i <= 9; i++) {
		w1 = w;
		h1 = h;
		while (1)//빈공간 찾기 h1,w1
		{
			if (w1 == 9) { h1++; w1 = 1; }
			else w1++;
			if (A[h1][w1] == 0)break;
		//	else if (h1 == 9 && w1 == 9 && A[h1][w1] >= 1)break; 이쪽파트를... 0이아닐때도 멈추게 9,9 위치를. 
		}
		q(i, h1, w1);
	}
	A[h][w] = 0;///////////////
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j;
	for (i = 1; i <= 9; i++)for (j = 1; j <= 9; j++)scanf("%d", &A[i][j]);
	for (i = 1; i <= 9; i++)
		q(i, 1, 1);
}
