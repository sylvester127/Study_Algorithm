/*
범위 1000만
N 연꽃수 10만
r 연꽃길이 만
d 점프가능 100만
*/
#include <stdio.h>
#define num 100010
int N, r, d;
int A[num], B[num];

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int N, r;
	scanf_s("%d %d", &N, &r);

	for (int i = 1; i <= N; i++)
	{
		scanf_s("%d %d", A[i], B[i]);
	}
	scanf_s("%d", &d);


	return 0;
}