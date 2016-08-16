#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	char ch, buf[50];
	int count;

	while (scanf_s("%c", &ch) != EOF)
	{
		printf("%c", ch);
	}

	return 0;
}