#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int yut, status[2];

	for (int i = 0; i < 3; i++)
	{
		status[0] = 0;
		status[1] = 0;

		for (int i = 0; i < 4; i++)
		{
			scanf_s("%d", &yut);

			if (yut == 0)
				status[0]++;
			else if (yut == 1)
				status[1]++;
			else
			{
				printf("Է¿");
				return 0;
			}
		}

		if (status[0] == 0 && status[1] == 4)
			printf("E");
		else if (status[0] == 1 && status[1] == 3)
			printf("A");
		else if (status[0] == 2 && status[1] == 2)
			printf("B");
		else if (status[0] == 3 && status[1] == 1)
			printf("C");
		else if (status[0] == 4 && status[1] == 0)
			printf("D");
	}
	return 0;
}