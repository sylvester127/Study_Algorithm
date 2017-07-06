#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);
	
	int a, i;

	while (1)
	{
		scanf_s("%d", &a);
		if (a == 0)
			break;
		
		for (i = 0; i < a; i++)
			printf("*");
		printf("\n");
	}
	return 0;
}