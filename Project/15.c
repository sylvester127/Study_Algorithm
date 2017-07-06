#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int weight, i = 0;
	float sum = 0;

	while (scanf_s("%d", &weight) != EOF)
	{
		if (weight >= 60) 
		{
			i++;
			sum = sum + weight;
		}
	}
	printf("%d\n%.2f", i, sum / i);
	return 0;
}