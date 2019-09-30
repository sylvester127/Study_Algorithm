#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int i, sum = 0, a[3];

	while (1)
	{
		sum = 0;
		for (i = 0; i < 3; i++)
		{
			scanf_s("%d", &a[i]);
		}
		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
			break;

		for (i = 0; i < 3; i++)
		{
			if (a[i] == 1)
				sum += 5000;
			else if(a[i] == 2)
				sum += 6000;
			else if (a[i] == 3)
				sum += 7000;
			else if (a[i] == 4)
				sum += 10000;
			else if (a[i] == 5)
				sum += 20000;
		}
		printf("%d\n", sum);
	}
	return 0;
}