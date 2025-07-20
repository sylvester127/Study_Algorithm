#include <stdio.h>
#include <algorithm>
#pragma  warning( disable:4996)
int n, d, k, c;
int input[33001];
int ch[3001];
int count[33001];
int coupon[33001];
/*
void countmax()
{
	int i;
	int cnt;

	for (i = 1; i <= k; i++) {
		cnt = count[i - 1];
		if (cnt < k && !ch[input[i]])    cnt++;
		count[i] = cnt;
		ch[input[i]]++;
	}

	for (; i <= n + k; i++) {

		ch[input[i - k]]--;

		if (ch[input[i - k]] == 0)    cnt--;

		if (cnt < k && !ch[input[i]]) cnt++;

		count[i] = cnt;
		ch[input[i]]++;

		coupon[i] = ch[c];
	}
}*/

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i;
	int max = 0;

	scanf("%d %d %d %d", &n, &d, &k, &c);

	for (i = 1; i <= n; i++) {
		scanf("%d", &input[i]);
	}

	for (; i <= n + k; i++) {
		input[i] = input[i - n];
	}


	int cnt;

	for (i = 1; i <= k; i++) {
		cnt = count[i - 1];
		if (cnt < k && !ch[input[i]])    cnt++;
		count[i] = cnt;
		ch[input[i]]++;
	}

	for (; i <= n + k; i++) { // 조건식 i<=n+k를만족할때만 수행하고 i++을 하여라. 

		ch[input[i - k]]--; 
		if (ch[input[i - k]] == 0)    cnt--;
		if (cnt < k && !ch[input[i]]) cnt++;
		count[i] = cnt;
		ch[input[i]]++;
		coupon[i] = ch[c];
	}

	for (i = k + 1; i <= n + k; i++) {
		if (coupon[i])        count[i]--;
		if (count[i] > max)
			max = count[i];
	}

	printf("%d\n", max + 1);

	return 0;
}