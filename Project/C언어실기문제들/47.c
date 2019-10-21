#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	char ch[50], temp, direction;
	int n, i, j;

	gets_s(ch, sizeof(ch));
	scanf_s("%c", &direction);
	scanf_s("%d", &n);

	if (direction == 'L')
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < strlen(ch)-1; j++)
			{
				temp = ch[j];
				ch[j] = ch[j + 1];
				ch[j + 1] = temp;
			}
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = (strlen(ch) - 1); j > 0; j--)
			{
				temp = ch[j];
				ch[j] = ch[j - 1];
				ch[j - 1] = temp;
			}
		}
	}
	printf("%s", ch);
	return 0;
}