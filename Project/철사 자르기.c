#include <stdio.h>
#include <math.h>
#define N 100010
int n, k, flag, item;
int x[N], y[N];
double cut, tempX;
__int64 sum, MAX;

int q(int a, int b, double c)
{
	if (a<b) {
		if (a<c && c<b)return 1;
	}
	else {
		if (b<c && c<a)return 1;
	}
	return 0;
}

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	scanf_s("%d %d", &n, &k);
	for (int i = 1; i <= k; i++)
	{
		scanf_s("%d %d", &x[i], &y[i]);
	}

	for (int i = 1; i <= k; i++)
	{
		item = q(x[i - 1], x[i], cut + 0.5);
		if (y[i - 1] != y[i])
		{
			sum + (abs(y[i] - y[i - 1]));
		}
		else if (item == 0)
		{
			sum + (abs(x[i] - x[i - 1]));
		}
		else
		{
			if (x[i - 1] < x[i])
			{
				sum += (cut + 0.5) - x[i - 1];
				tempX = x[i] - (cut + 0.5);
			}
			else
			{
				sum += (x[i - 1] - (cut + 0.5));
				tempX = (cut + 0.5) - x[i];
			}
			if (MAX<sum)
				MAX = sum;
			sum = tempX;
		}
	}
	return 0;
}