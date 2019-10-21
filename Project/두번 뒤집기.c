#include <stdio.h>
#define N 11

int n, cnt[N], wonbone[N];

void swap(int a, int b)
{
	int temp, i, j, t;
	int cnt=(b - a + 1) / 2;

	for (i = a, j = b, t = 1; t <= cnt; i++, j--, t++)
	{
		temp = cnt[i];
		cnt[i] = cnt[j];
		cnt[j] = temp;
	}
	
}

void r1(int a, int b)
{
	int temp, i, j, t;
	int cnt = (b - a + 1) / 2;
}

void r2(int a, int b)
{
	int temp, i, j, t;
	int cnt = (b - a + 1) / 2;
}

void r3(int a, int b)
{
	int temp, i, j, t;
	int cnt = (b - a + 1) / 2;
}
void r4(int a, int b)
{
	int temp, i, j, t;
	int cnt = (b - a + 1) / 2;
}

int c()
{

}
void blue()
{
	for (int i = 1; i <= n; i++)
	{
		if (cnt[i] != i)
		{
			swap(i, cnt[i]);
			return 0;
		}
	}
}

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int check, s, e;

	scanf_s("%d", &n);

	if (n < 5 && n>10000)
	{
		printf("input err");
		return 0;
	}

	for (int i = 1; i <= 10; i++)
	{
		scanf_s("%d", &cnt[i]);
	}

	bule();
			
	printf("");	
	return 0;
}