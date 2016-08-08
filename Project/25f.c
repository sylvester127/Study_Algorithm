#include <stdio.h>
#include <string.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, b = 1, i;
	char ch[10] = "1";
	char buf[10] = "";

	scanf_s("%d", &a);
	if (a > 10)
		return 0;

	for (i = 1; i - 1 < a; i++)
	{
		ch[i - 1] = i;
	}
	printf("%s", ch);
	b = 1;
	/*for (i = 0; i < a; i++)
	{
		printf("%s", ch);
		strncpy_s(ch, sizeof(ch), ch, sizeof(ch) - 1);
		ch[sizeof(ch) - 1] = 0;
		printf("\n");
		b++;
	}*/
	return 0;
}