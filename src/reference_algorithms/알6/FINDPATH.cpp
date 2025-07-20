#include <stdio.h>

int A[200][200] = { 0 };
int check[40000] = { 0 };
int bun[200][200] = { 0 };

int main(void)
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int N;
	int i, j, y, x;
	int MIN = 987654321; 
	int p;
	scanf("%d", &N); 
	int Q[200][200] = { 0 };
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{


}