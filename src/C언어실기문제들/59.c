#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int arr[50], N, temp;
	int i = 0, j;
	scanf_s("%d", &N);
	temp = N;
	while (1)
	{
		arr[i] = temp % 2;
		temp = temp / 2;
		i++;
		if (temp == 0)
			break;
	}

	for (j = i - 1; j >= 0; j--)
		printf("%d", arr[j]);
	return 0;
}