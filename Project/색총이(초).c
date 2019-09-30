#include <stdio.h>
#define N 101

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, sum = 0;
	int matrix[N][N];
	int x1, y1, x2, y2;

	scanf_s("%d", &n);

	if (n > 100)
	{
		printf("입력값 오류");
		return 0;
	}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			matrix[i][j] = 0;

	for (int i = 0; i < n; i++) {		
		scanf_s("%d %d", &x1, &y1);
		x2 = x1 + 10;
		y2 = y1 + 10;
		for (int j = x1; j < x2; j++)
			for (int k = y1; k < y2; k++)
				matrix[j][k]++;
	}
	
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (matrix[i][j]) sum++;
	printf("%d\n", sum);
	return 0;
}