#include <cstdio>

int n, m, input[10001], st, ed, sum;
__int64 res;  // �ܼ��� int�θ� �ϸ� ���� ������ �ʰ��ϰ� �ȴ� �׷��� ������ __int64�� �ִ�ũ�⸦ ����

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int i;

	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) scanf("%d", &input[i]);



	st = 1, ed = 1, sum = input[1];  // start�� end�� 1�� ������ �Ͽ��� �迭���� ���� ������´� 
	while (st <= ed && ed <= n) // st�� �����鼭 �������鼭 ed�� n���� �����鼭 ���ٸ� �ݺ� ���� 
	{
		if (sum<m) sum += input[++ed]; // n���� �־��� ������ n�� 3�̴� �� sum < 3 �۴ٸ� ���ض� 
		else if (sum>m) sum -= input[st++]; // ũ�ٸ� ?? ���ָ� �ȴ� 
		else // �������� �����ϱ�? ���ٶ�� �ǹ��ε� 3�̸� cnt++�ϵ� res���� �÷��ش�. 
		{
			sum += input[++ed];
			res++;
		}
	}

	printf("%d", res);

	return 0;
}