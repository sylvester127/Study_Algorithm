#include <stdio.h>
#include <algorithm>
#pragma  warning( disable:4996)

int m[31][31] = { 0 };
int M[31][31] = { 0 };


int main(void)
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int N; // ²ÉÀÇ ¼ö 
	int i, j, cnt = 0;
	
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &m[i][j]);
		}
	}
	
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if()
		}
	}
	
	
}