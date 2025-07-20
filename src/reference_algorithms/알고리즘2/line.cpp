#include <stdio.h>

#define SIZE 100

int n, l;
int cnt = 1;
int a[SIZE + 1];
bool check[SIZE + 1];

void input()
{
	scanf("%d%d", &n, &l);
}

void process2()
{
	int i, j;
	for (i = 1; i <= cnt; i++) {
		if (a[i] == l) {
			a[i]++;
			j = i;
			while (a[j] >= 10) {
				if (check[j + 1] == 0) {
					check[j + 1] = 1;
					cnt++;
				}
				a[j] -= 10;
				a[j + 1]++;
				j++;
			}
		}
	}
}

void process()
{
	int i, j;
	a[cnt] = 0;
	check[cnt] = 1;
	for (i = 1; i <= n; i++) {
		a[1]++;
		j = 1;
		while (a[j] >= 10) {
			if (check[j + 1] == 0) {
				check[j + 1] = 1;
				cnt++;
			}
			a[j] -= 10;
			a[j + 1]++;
			j++;
		}
		process2();
	}
}

void output()
{
	int i;
	for (i = cnt; i >= 1; i--)
		printf("%d", a[i]);
	printf("\n");
}

int main()
{
	freopen("INPUT.TXT", "r", stdin);
	freopen("OUTPUT.TXT", "w", stdout);
	input();
	process();
	output();
	fcloseall();
	return 0;
}