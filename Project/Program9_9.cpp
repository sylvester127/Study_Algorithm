/*#include <iostream>
using namespace std;

template <class Type>
int sort(Type list[])
{
	if (list[0]==0&& list[1] == 0 && list[2] == 0)
	{
		cout << "-1반환" << endl;
		return -1;
	}
	else 
	{
		for (int i = 0; i < 3; i++)
		{
			cout << list[i] << endl;
		}
	}
}

void main() {
	int a[3] = {0}, input;
	float b[3] = {0}, finput;

	cout << "배열 입력" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		a[i] = input;
	}	
	sort(a);

	for (int i = 0; i < 3; i++)
	{
		cin >> finput;
		b[i] = finput;
	}
	sort(b);
	system("pause");
}*/