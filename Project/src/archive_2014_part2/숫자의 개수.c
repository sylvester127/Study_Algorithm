#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	
	int a, b, c;	//  
	int num[10];	//  0~9
	int result;		//  
	char buf[16];

	scanf_s("%d %d %d", &a, &b, &c);

	result = a*b*c;
	_itoa_s(result, buf, sizeof(buf), 10);

	for (int i = 0; i < 10; i++)
		num[i] = 0;

	for (int i = 0; i < strlen(buf); i++)
	{
		int n;
		char temp = buf[i];
		n = atoi(&temp);
		num[n]++;
	}

	for (int i = 0; i < sizeof(buf) - 1; i++)
	{
		//result
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", num[i]);
	return 0;
}