#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int M, N, X;
	char *format;

	scanf_s("%d %d %d", &M, &N, &X);
	
	format = (char*)malloc(sizeof(char)*X);

	//sprintf_s(format, sizeof(format), "%%.%df", X);
	printf("%.*f", X, M / N);
	
	return 0;
}