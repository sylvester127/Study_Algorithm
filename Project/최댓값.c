#/*include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a[9][9];
	srand(time(NULL));
	int i, j;
	int r, c, max = 0;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			a[i][j] = (rand() % 100) + 1;
			printf("%.2d ", a[i][j]);
			max = max(a[i][j], a[i][j+1]);
		}
		printf("\n");
	}
	printf("\n%d\n", max);

	system("pause");
	return 0;
}*/