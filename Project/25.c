#include <stdio.h>
#include <string.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a;
	int ch[10];
	int i, j;

	scanf_s("%d", &a);
	if (a > 10)
		return 0;

	for (i = 0; i < a; i++)
	{
		ch[i] = i+1;
		
	}

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			if (ch[j] == 0)
			{
				printf(" ");
				continue;
			}

			printf("%d", ch[j]);

		}
		ch[i] = 0;
		printf("\n");
	}
	return 0;
}