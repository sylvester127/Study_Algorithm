#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a;

	while (scanf_s("%d", &a) != EOF)
	{
		printf((a % 2 == 0) ? "¦��\n" : "Ȧ��\n");
	}
	return 0;
}