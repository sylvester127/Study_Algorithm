#include <stdio.h>
#include <stdlib.h>

void Print(int x, double d)
{
	printf("%.*f\n", x, d);
}

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int M, N, X;
	char format[32];
	int i;
	
	scanf_s("%d %d %d", &M, &N, &X);

	double temp = (double)M / (double)N;

	Print(X, temp);
	return 0;
}