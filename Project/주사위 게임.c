#include <stdio.h>
#define N 1000

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, max = 0;

	scanf_s("%d", &n);
	int arr[N];


	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		scanf_s("%d %d %d", &a, &b, &c);
		
		if (a == b && b == c)
		{
			arr[i] = a * 1000 + 10000;
		}
		else if ((a == b&&b != c) || (b == c&&c != a) || (c == a&&a != b))
		{
			if(a == b)
				arr[i] = 1000 + a * 100;
			else if(b == c)
				arr[i] = 1000 + b * 100;
			else if(c== a)
				arr[i] = 1000 + c * 100;
		}
		else
		{
			int tempMax = 0;

			tempMax = (a > b) ? a : b;
			tempMax = (tempMax > c) ? tempMax : c;
			arr[i] = 100 * tempMax;
		}
		max = (max > arr[i]) ? max : arr[i];
	}
	printf("%d", max);
	return 0;
}