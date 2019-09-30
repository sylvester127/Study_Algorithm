#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	char ch[100];
	int i;

	gets_s(ch, sizeof(ch));

	for (i = strlen(ch)-1; i >= 0; i--)
	{
		printf("%c", ch[i]);
	}
	return 0;
}