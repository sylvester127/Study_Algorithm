#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	char arr[50];
	int i, flag = 0;

	gets_s(arr, sizeof(arr));

	for (i = 0; i <= strlen(arr) - 1; i++)
	{
		if (flag == 1)
			printf("%c", arr[i]);

		if (arr[i] == '@')
			flag = 1;
	}
	printf("@");

	for (i = 0; i <= strlen(arr); i++)
	{
		if (arr[i] == '@')
			break;
		printf("%c", arr[i]);
	}
	return 0;
}