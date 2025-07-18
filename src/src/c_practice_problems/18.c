#include <stdio.h>
#include <string.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	char ch[20];
	int i, sum = 0;
		
	for(i=0;i<5;i++)
	{
		gets_s(ch, sizeof(ch));
		sum += strlen(ch);
	}
	printf("%d", sum);
	return 0;
}