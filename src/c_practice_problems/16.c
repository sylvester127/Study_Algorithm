#include <stdio.h>
#include <string.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	
	char ch;
	int i;

	fseek(f, 2, SEEK_SET);
	scanf_s("%c", &ch);
	
	freopen_s(&f, "output.txt", "w", stdout);
	printf("%c %d", ch,ch);

	return 0;
}