#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	char a;

	while (scanf_s("%c", &a) != EOF)
	{
		switch (a)
		{
		case '0':
			printf("Y");
			break;
		case '1':
			printf("B");
			break;
		case '2':
			printf("K");
			break;
		case '3':
			printf("E");
			break;
		case '4':
			printf("A");
			break;
		case '5':
			printf("R");
			break;
		case '6':
			printf("N");
			break;
		case '7':
			printf("D");
			break;
		case '8':
			printf("O");
			break;
		case '9':
			printf("G");
			break;
		default:
			break;
		}
	}
	return 0;
}