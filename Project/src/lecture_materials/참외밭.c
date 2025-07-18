#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int k, X, Y, x, y, MaxY = 0;
	int A[10], B[10];
	scanf_s("%d", &k);

	for (int i = 0; i < 6; i++)
		scanf_s("%d %d", &A[i], &B[i]);

	for (int i = 0; i < 6; i++)
	{
		if ((A[i] == 1 || A[i] == 2) && MaxY < B[i])
		{
			MaxY = B[i];
			if (B[(i + 1) % 6] > B[(i + 5) % 6])
			{
				Y = MaxY;
				X = B[(i + 1) % 6];
				y = Y - B[(i + 2) % 6];
				x = B[(i + 3) % 6];
			}
			else
			{
				Y = MaxY;
				X = B[(i + 5) % 6];
				y = B[(i + 2) % 6];
				x = B[(i + 3) % 6];
			}
		}
	}
	printf("%d", (X*Y - x*y)*k);
	return 0;
}