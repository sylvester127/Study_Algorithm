#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);
	
	char ch[100];
	int i;

	gets_s(ch, sizeof(ch));

	for (int i = 0; i < strlen(ch); i++)
	{
		if (isupper(ch[i]))
			ch[i]=(char)tolower(ch[i]);
		else
			ch[i] = (char)toupper(ch[i]);
	}
	printf("%s", ch);
	return 0;
}