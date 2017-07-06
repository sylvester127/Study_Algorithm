#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int num[10], max = 0, order;

	for (int i = 1; i < 10; i++)
	{
		scanf_s("%d", &num[i]);

		if (max <= num[i])
		{
			max = num[i];
			order = i;
		}
	}
	printf("%d\n%d", max, order);
	return 0;
}