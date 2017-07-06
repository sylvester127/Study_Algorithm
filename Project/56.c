#include <stdio.h>
#include <math.h>

int main()
{
	FILE *f;
	freopen_s(&f, "output.txt", "w", stdout);

	float a, b, c;
	int i;

	for (i = 0; i <= 999; i++)
	{
		if (i >= 0 && i < 10)
		{
			if (i == powf(i, 3))
				printf("%d\n", i);
		}
		if (i >= 10 && i < 100)
		{
			c = i % 10;
			b = (i / 10) % 10;
			if (i == powf(c, 3) + powf(b, 3))
				printf("%d\n", i);
		}
		if (i >= 100 && i < 1000)
		{
			c = i % 10;
			b = (i / 10) % 10;
			a = (i / 100) % 10;
			if (i == powf(c, 3) + powf(b, 3) + powf(a, 3))
				printf("%d\n", i);
		}
	}
	return 0;
}