#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int r;

	scanf_s("%d", &r);
	printf("%.2f %.2f", 2 * r*PI, pow(r, 2)*PI);
	return 0;
}