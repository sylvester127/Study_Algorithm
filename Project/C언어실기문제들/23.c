#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, b = 1, i;
	char ch[10] = "";
	char buf[10] = "";

	scanf_s("%d", &a);
	if (a > 10)
		return 0;

	for (i = 0; i < a; i++)
	{
		strcat_s(ch, sizeof(ch), itoa(b, buf, 10));
		printf("%s", ch);
		printf("\n");
		b++;
	}
	return 0;
}