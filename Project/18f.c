#include <stdio.h>
#include <string.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	char ch[30];
	int sum = 0;
	
	while (!EOF)
	{
		scanf_s("%s", ch);
		printf("%s", ch);
		sum += strlen(ch);
		ch[0] = "\0";
		
	}
	
	printf("%d", sum);
	return 0;
}