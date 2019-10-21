#include <stdio.h>
#define Num 3010
int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int N, L;	//N擎 類熱, L擎 蘊熱
	
	scanf_s("%d $d", &N, &L);
	int bar[Num][2];	//夥 望檜, 寞щ
	int max = 0;
	for (int i = 1; i <= N; i++)
	{
		scanf_s("%d %d", &bar[i][0], &bar[i][1]);
	}

	for (int i = 1; i < N; N++)
	{
		
		if (bar[i][1] != bar[i+1][1])
		{
			if (max <= L - bar[i][0] + bar[i][0])
				max = L - bar[i][0] + bar[i][0];
		}
	}
	printf("%d", max / 2);
}