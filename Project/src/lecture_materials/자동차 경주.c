#include <stdio.h>
#define n 1010;

typedef struct Data
{
	int p, q, r;
}Data;
Data data[n];

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);
	
	int N, M;
	scanf_s("%d %d", &N, &M);

	for (int i = 1; i <= N; i++)
	{
		scanf_s("%d %d %d", &data->p, &data->q, &data->r);
	}
}