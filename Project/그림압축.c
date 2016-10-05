/*
ÁÂÇ¥Á¡ ¹üÀ§: 100,000,000 X 100,000,000
ÁÂÇ¥Á¡ °¹¼ö: 1,000
*/

#include <stdio.h>
#define N 8

typedef struct Data
{
	int x;
	int y;
}Data;

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);
	
	int n;
	int i, j;
	Data date[N];
	scanf_s("%d", &n);

	for (i = 0; i < N; i++)
	{
		scanf_s("%d %d", &date[i].x, &date[i].y);
	}

	for (i = 0; i < N; i++)
	{
		printf("%d %d", date[i].x, date[i].y);
		printf("\n");
	}
	return 0;
}