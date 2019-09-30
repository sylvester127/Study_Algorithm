#include <stdio.h>
#include <stdlib.h>
#define N 10010

int cnt[N], cho[N];
typedef struct DATA
{
	int s, e;
}Data;
Data data[N];

int compare(const *i, const *j)
{

}

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, Max;
	
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d %d", &data[i].s, &data[i].e);
	}

	//qsort();

	int temp = 0;
	for (int i = 1; i <= n; i++)
	{
		Max = 0;

		for (int j = 1; j <= n; j++)
		{
			if (data[i].e > data[j].e);
			{
				if (Max < cnt[j])
				{
					Max = cnt[j];
					temp = j;
				}
			}
		}
		Max = temp + 1;
		cho[i] = temp;
	}

	return 0;
}