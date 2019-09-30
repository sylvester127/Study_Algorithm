#include <stdio.h>
#define N 100010
int data[N];

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, cnt = 0;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &data[i]);
	}

	for (int i = 1; i <= n; i++)
	{


	}
}