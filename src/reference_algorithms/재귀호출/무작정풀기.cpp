#include <stdio.h>
#pragma  warning( disable:4996)
//��� �Լ� ȣ��

int sum(int n) {
	int ret = 0;
	for (int i = 1; i <= n; ++i)
	{
		ret += i;
	}
	return ret; 
}

int recursiveSum(int n) {
	if (n == 1) return 1; // ���̻� �ɰ����� ���� �� ���� 
	return n + recursiveSum(n - 1);
}

int main(void)
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	int a;
	int i;
	scanf("%d", &a);
	sum(a); 
	recursiveSum(a);
}

