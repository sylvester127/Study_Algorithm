#include <stdio.h>
#include <math.h>
int main(void)
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int N;
	int i, j; 
	int A[10000] = { 0 };
	scanf("%d", &N); 

	for (i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
