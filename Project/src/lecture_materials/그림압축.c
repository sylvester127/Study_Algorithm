/*
ǥ : 100,000,000 X 100,000,000
ǥ : 1,000
*/

#include <stdio.h>
#include <stdlib.h>
#define N 10

int compareX()
{

}

int compareY()
{

}

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
	Data date[N];
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &date[i].x, &date[i].y);
	}

	/*for (int i = 0; i < n; i++)
	{
		printf("%d %d", date[i].x, date[i].y);
		printf("\n");
	}*/

	//x   ÷ν ڷ PXϼ
	qsort(date + 1, date + n + 1, compareX);
	
	for (int i = 1; i <= n; i++)
	{

	}

	//y   ÷ν ڷ PYϼ
	sort(date + 1, date + n + 1, compareY);
	{
	
	}
	return 0;
}