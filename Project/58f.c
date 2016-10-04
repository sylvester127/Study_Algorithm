#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int M, N, X;
	char format[32];
	int i;

	scanf_s("%d %d %d", &M, &N, &X);
	
	sprintf_s(format, 32, "%%.%df",X);
	printf(format, M / N);
	return 0;
}