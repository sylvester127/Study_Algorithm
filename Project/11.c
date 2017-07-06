#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a, b;

	scanf_s("%d %d", &a, &b);

	if ((a + b) >= 140)
		printf("%d 합격", a + b);
	else
		printf("%d 불합격", a + b);

	return 0;
}