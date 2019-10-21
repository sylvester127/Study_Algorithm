#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int tPeople[5][2], iPeople[5], temp = 0, max = 0;
	
	for (int i = 0; i < 5; i++)
		iPeople[i] = 0;

	for (int i = 1; i <= 4; i++)
	{
		scanf_s("%d %d", &tPeople[i][0], &tPeople[i][1]);
		iPeople[i] += temp;
		iPeople[i] -= tPeople[i][0];
		iPeople[i] += tPeople[i][1];
		temp = iPeople[i];
	}

	for (int i = 1; i <= 4; i++)
	{
		if (max <= iPeople[i])
			max = iPeople[i];
	}
	printf("%d", max);
	return 0;
}