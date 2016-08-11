#include <stdio.h>
#include <string.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, i;
	int ch[10];

	scanf_s("%d", &a);
	if (a > 10)
		return 0;

	for (i = 0; i < a; i++)
	{
		ch[i] = i+1;
		
	}

	for (i = a; i > 0; i--)
	{
		printf("%s", ch[i]);
	}
	return 0;
}