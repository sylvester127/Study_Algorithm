#include <stdio.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int M, N, X;
	int quotient, remainder;
	int i;
	
	scanf_s("%d %d %d", &M, &N, &X);
	
	quotient = M / N;
	remainder = M % N;

	for (int i = 0; i <= X; i++)
	{	
		if(i == 0)
			printf("%d.", quotient);
		else
		{
			printf("%d", quotient);
		}
		int temp = remainder * 10;
		quotient = (remainder * 10) / N;
		remainder = temp % N;
	}

	return 0;
}