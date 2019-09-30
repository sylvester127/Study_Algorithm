#include <stdio.h>

int A[10000000];
int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int N,L=0,n;
	
	A[0] = 1;
	scanf("%d", &n);
	for (int j = 1; j <= n; j++)
	{
		for (int i = 0; i <= L; i++)
		{
			A[i] *= 2;
			if (i == L && A[i] >= 10)L++;
		}

		int carry = 0;
		for (int i = 0; i <= L; i++)
		{
			int na = A[i] % 10 + carry;
			carry = A[i] / 10;
			A[i] = na;
		}
	}
	for (int j = L; j >= 0; j--)printf("%d", A[j]);
	return 0;
}