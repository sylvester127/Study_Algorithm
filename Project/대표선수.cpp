#include <stdio.h>
#include <algorithm>
#define N 1010
struct abc {
	int g, m;
}DATA[N*N];
bool compare(const abc &i, const abc &j) {
	return i.m<j.m;
}
int Gcount[N], TOTcount = 0, XXX = 987654321, MAX = 0, MIN = 987654321;
using namespace std;
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int s = 0, e, gn, mn, a, count = 0;
	scanf("%d%d", &gn, &mn);
	for (int i = 1; i <= gn; i++) {
		for (int j = 1; j <= mn; j++) {
			scanf("%d", &a);
			count++;
			DATA[count].g = i;
			DATA[count].m = a;
		}
	}
	sort(DATA + 1, DATA + count + 1, compare);
	for (int i = 1; i <= count; i++) {
		printf("%d(%d) ", DATA[i].m, DATA[i].g);
	}
	MIN = DATA[1].m;
	e = 1;

	while (1) {
		if (s == count&&s - e < gn-1)break;
		if (s==count || TOTcount >= gn) {   //end 이동
			if (Gcount[DATA[e].g] == 1)TOTcount--;
			Gcount[DATA[e].g] -= 1;
			MIN = DATA[e + 1].m;
			if (TOTcount == gn) {
				if ((MAX - MIN)<XXX)XXX = MAX - MIN;
			}
			e++;
		}
		else {
			s++;
			if (Gcount[DATA[s].g] == 0)TOTcount++; //총 카운트+
			Gcount[DATA[s].g] += 1;
			MAX = DATA[s].m;
			if (TOTcount >= gn && (MAX - MIN)<XXX)XXX = MAX - MIN;
		}
	}



	return 0;
}