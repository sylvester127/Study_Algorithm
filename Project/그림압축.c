/*
��ǥ�� ����: 100,000,000 X 100,000,000
��ǥ�� ����: 1,000
*/

#include <stdio.h>
#define N 8

typedef struct Data
{
	int x;
	int y;
}Data[N];

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);
	
	int n;
	int i, j;

	scanf_s("%d", &n);

	return 0;
}