#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int num[6], sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &num[i]);
		sum += num[i] * num[i];
	}
	printf("%d", sum % 10);
	return 0;
}