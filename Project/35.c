#include <stdio.h>

int Gcd(int a, int b)
{
	if (b == 0) 
		return a;
	else Gcd(b, a%b);
}

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, b, gcd;
	
	scanf_s("%d %d", &a, &b);
	gcd = Gcd(a, b);
	printf("%d", gcd);
	return 0;
}