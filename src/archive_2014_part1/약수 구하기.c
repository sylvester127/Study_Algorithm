#include <stdio.h>
#define n 128

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int N, K, L = 0;
	int arr[n];

	scanf_s("%d %d", &N, &K);

	if (N < 1 && N > 10000)
	{
		printf("입력 오류");
		return 0;
	}

	for (int i = 0; i < n; i++)
		arr[i] = 0;

	for (int i = 1; i <= N; i++)
	{
		if (N%i == 0)
		{
			arr[L] = i;
			L++;
		}
	}

	printf("%d", arr[K-1]);
	return 0;
}