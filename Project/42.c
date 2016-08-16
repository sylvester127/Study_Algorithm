#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, i, frequency[] = { 0,0,0,0,0,0 };
	srand((unsigned)time(NULL));

	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		switch ((rand() % 6) + 1)
		{
		case 1:
			frequency[0]++;
			break;
		case 2:
			frequency[1]++;
			break;
		case 3:
			frequency[2]++;
			break;
		case 4:
			frequency[3]++;
			break;
		case 5:
			frequency[4]++;
			break;
		case 6:
			frequency[5]++;
			break;
		default:
			break;
		}
	}

	for (i = 0; i < 6; i++)
	{
		float percentage = frequency[i] * 100 / n;
		printf("%d %d %.2f\n", i + 1, frequency[i], percentage);
	}
	return 0;
}