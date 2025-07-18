#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, b, c, sum;
	
	while (1)
	{
		sum = 0;
		scanf_s("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;

		switch (b)
		{
		case 1:
			if (a == 1)
				sum = 5500 * 0.8*c;
			else
				sum = 5500 * 0.9*c;
			break;
		case 2:
			if (a == 1)
				sum = 7000 * 0.8*c;
			else
				sum = 7000 * 0.9*c;
			break;
		case 3:
			if (a == 1)
				sum = 8500 * 0.8*c;
			else
				sum = 8500 * 0.9*c;
			break;
		case 4:
			if (a == 1)
				sum = 9500 * 0.8*c;
			else
				sum = 9500 * 0.9*c;
			break;
		case 5:
			if (a == 1)
				sum = 12000 * 0.8*c;
			else
				sum = 12000 * 0.9*c;
			break;
		case 6:
			if (a == 1)
				sum = 20000 * 0.8*c;
			else
				sum = 20000 * 0.9*c;
			break;
		default:
			break;
		}
		printf("%d\n", sum);
	}
	return 0;
}