#include <cstdio>

int n, m, input[10001], st, ed, sum;
__int64 res;  // 단순히 int로만 하면 값의 범위를 초과하게 된다 그렇기 때문에 __int64로 최대크기를 설정

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int i;

	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) scanf("%d", &input[i]);



	st = 1, ed = 1, sum = input[1];  // start와 end에 1씩 선언을 하여서 배열에서 값을 가지고온다 
	while (st <= ed && ed <= n) // st가 작으면서 같아지면서 ed가 n보다 작으면서 같다면 반복 종료 
	{
		if (sum<m) sum += input[++ed]; // n에서 주어진 조건은 n이 3이다 즉 sum < 3 작다면 더해라 
		else if (sum>m) sum -= input[st++]; // 크다면 ?? 빼주면 된다 
		else // 나머지는 무엇일까? 같다라는 의미인데 3이면 cnt++하듯 res값을 늘려준다. 
		{
			sum += input[++ed];
			res++;
		}
	}

	printf("%d", res);

	return 0;
}