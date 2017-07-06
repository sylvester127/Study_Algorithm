#include <stdio.h>
#define N 300
int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n,A[N], R[N];

	for (int i = 3; i <= n; i++)
	{
		scanf_s("%d", A[i]);
	}

	for (int i = 3; i <= n; i++)
	{
		R[i] = (A[i] + R[i - 2] > A[i] + A[i - 1] + R[i - 3]) ? A[i] + R[i - 2] : A[i] + A[i - 1] + R[i];
		printf("%d", R[i]);
	}
}