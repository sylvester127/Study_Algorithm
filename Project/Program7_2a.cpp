/*#include <iostream>
using namespace std;

int fun(int *k) {
	*k += 4;
	return 3 * (*k) - 1;
}

void main() {
	int i = 10, j = 10, sum1, sum2;
	sum1 = (i / 2) + fun(&i);
	sum2 = fun(&j) + (j / 2);

	cout << i << " " << j << endl;
	cout << sum1 << " " << sum2 << endl;
	getchar();
}*/