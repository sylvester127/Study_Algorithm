#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int K, N, M;

	scanf_s("%d %d %d", &K, &N, &M);

	if (K * N < M)
		printf("0");
	else
		printf("%d", (K*N) - M);
	return 0;
}