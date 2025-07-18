#include <stdio.h>
#include <stdlib.h>
#define N 10
//3월 1일부터 11월 30까지 최소의 장미꽃 구하기
int check[N];

typedef struct DATA
{
	int sm, sd;
	int em, ed;
}DATA;
DATA data[N];

int compare(const DATA* i, const DATA* j)
{
	if (*(int*)i->sm == *(int*)j->sm)
		return i->sd < j->sd;
	else return i->sm < j->sm;
}

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d %d %d %d", &data[i].sm, &data[i].sd, &data[i].em, &data[i].ed);
	}
	
	qsort(data, sizeof(data)*N, sizeof(data), compare);

	return 0;
}