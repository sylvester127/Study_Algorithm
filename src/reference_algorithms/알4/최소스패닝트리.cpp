#include <stdio.h>

int q[9999][9999] = { 0 };

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int V, E;
	int i, j=0; 
	int A, B, C;
	int min = 987654321;
	int temp = 0;
	int temp1 = 0;
	int temp2 = 0;
	scanf("%d %d", &V, &E);

	for (i = 0; i < E; i++)
	{
		scanf("%d %d %d", &A, &B, &C); 
		q[i][j] = A; 
		q[i][j + 1] = B; 
		q[i][j + 2] = C;
	}
	// 정렬 오름차순으로 

	for (i = 0; i < E; i++)
	{
		for (j = 0; j < E; j++)
		{
			if (q[i][j + 2] > q[i + 1][j + 2])
			{
				temp = q[i + 1][j + 2];
				q[i + 1][j + 2] = q[i][j + 2];
				temp1 = q[i][j];
				temp2 = q[i][j + 1];
				q[i][j] = q[i + 1][j];
				q[i][j+1] = q[i + 1][j + 1];
				q[i][j + 2] = temp;
				q[i + 1][j] = temp1;
				q[i + 1][j + 1] = temp2;
				if (q[i + 1][j] == 0)break;
			}
		}
	}
	for (i = 0; i < E; i++)
	{
		for (j = 0; j < E; j++)
		{
			printf("%d", q[i][j]);
		}
		printf("\n");
	}
}