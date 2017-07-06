#include <stdio.h>
#include <string.h>
#define N 64
int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	char temp[N];
	int dowl[N], hight = 10;

	gets_s(temp,sizeof(temp));
	printf("%s\n", temp);
	for(int i = 1; i<=strlen(temp)-1;i++)
	{
		if (temp[i] == '(')
			dowl[i] = 1;
		else
			dowl[i] = 0;
	}
	printf("%s", dowl);
	/*
	for (int j= 0; j < i-1; j++)
	{
		if (dowl[j] == -1)
			break;
		if (dowl[j] != dowl[j + 1])
			hight += 10;
		else
			hight += 5;
	}
	printf("%d", hight);*/
	return 0;
}