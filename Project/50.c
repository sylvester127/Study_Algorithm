#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n;

	scanf_s("%d", &n);

	if (n > 9)
		return 0;



	return 0;
}