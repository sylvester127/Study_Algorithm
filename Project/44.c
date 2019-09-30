#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	char ch[100];
	int check, i;

	while (gets_s(ch, sizeof(ch))!=EOF)
	{
		check = 0;
		for (i = 0; i < strlen(ch); i++)
		{
			if (ch[i]=='A')
				check++;
		}
		printf("%d\n", check);
	} 
	return 0;
}