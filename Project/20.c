#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	char ch[20];

	gets_s(ch, sizeof(ch));

	for (int i = 0; i<strlen(ch); i++)
		if (ch[i] == 'A') ch[i] = '*';

	printf("%s", ch);
	return 0;
}