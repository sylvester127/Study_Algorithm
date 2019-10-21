#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a,b;

	scanf_s("%d %d", &a,&b);
	
	if (a >= b)
		printf("%d", a);
	else
		printf("%d", b);
	return 0;
}