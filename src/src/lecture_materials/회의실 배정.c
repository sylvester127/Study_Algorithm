#include <stdio.h>
#include <stdlib.h>
#define N 500
int check[N];
typedef struct DATA
{
	int num;
	int stime;
	int etime;
}DATA;
DATA data[N];

int compare(const void* i, const void* j)
{
	int v1, v2;
	v1 = ((DATA *)i)->etime;
	v2 = ((DATA *)j)->etime;

	if (v1 > v2)
		return 1;
	else if(v1 < v2)
		return -1;
	else return 0;
}

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d %d", &data[i].num, &data[i].stime, &data[i].etime);
	}

	//
	qsort(data, n, sizeof(data[0]), compare);
	
	check[0] = 1;
	for (int i = 0; i < n; i++)
	{
		if (data[i].etime < data[i + 1].stime)
			check[i] = 1;

	}
}