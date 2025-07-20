#include <stdio.h>
#include <string.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	char temp;
	int dowl[64], hight = 10;
	int i = 0;

	while(1)
	{
		if (scanf_s("%c", &temp) == EOF)
			break;

		if (temp == '(')
			dowl[i] = 1;
		else
			dowl[i] = 0;
		i++;
	}

	if (i < 3 && i >= 50)
	{
		printf("입력 오류");
		return 0;
	}

	for (int j= 0; j < i-1; j++)
	{
		if (dowl[j] == -1)
			break;
		if (dowl[j] != dowl[j + 1])
			hight += 10;
		else
			hight += 5;
	}
	printf("%d", hight);
	return 0;
}