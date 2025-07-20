#include <cstdio>
#define min(a,b) (((a)<(b))?(a):(b))
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int d[111111] = { 0, };
	int n;
	scanf("%d\n", &n);

	for (int i = 1; i <= n; i++) {
		d[i] = d[i - 1] + 1;;
		for (int j = 2; j*j <= i; j++) {
			d[i] = min(d[i], d[i - j*j] + 1);
		}
	}
	printf("%d\n", d[n]);
	return 0;
}
/*	int a,b,k,i;
	int cnt = 0, rcnt = 0, cnt1 = 0, sum = 0, max = 0;
	scanf("%d", &a);
	k = a;
	for (i = a; i > 0; i--)
	{
		b = a / i; 
		if (a <= b*b && b!=a)
			Sum[cnt] = b;
		else if (a >= b*b)
		{
			Sum[cnt] = b;
		}
		cnt++;
	}
	for (i = a; i > 0; i--)
	{
		if (max < Sum[i] && a>=Sum[i] * Sum[i])
			max = Sum[i];
		if (a >= max * max && max * max != 0 && max*max != 1) {
			a = a - max*max;
			rcnt++;
		}
		else if (a >= Sum[i] * Sum[i] && rcnt != 0) {
			a = a - Sum[i] * Sum[i];
			rcnt++;
		}
	}
	printf("%d", rcnt);
}*/