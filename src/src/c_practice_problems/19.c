#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	char a[10], b[10];
	int c;

	gets_s(a, sizeof(a));
	gets_s(b, sizeof(b));
	scanf_s("%d", &c);

	strcat_s(a, sizeof(a), b);
	printf("%d",atoi(a) + c);
	return 0;
}