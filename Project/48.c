#include <stdio.h>
#include <string.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	char initial, bufA[50], bufB[20] = "\0";
	int count = 1;
	int i, j;

	gets_s(bufA, sizeof(bufA));

	initial = bufA[0];
	bufB[0] = bufA[0];

	for (i = 1; i < strlen(bufA) + 1; i++)
	{
		if (initial != bufA[i])
		{
			if (count < 5)
				printf("%s", bufB);
			else
			{
				printf("%c(%d)", initial, count);
			}
			int len = strlen(bufB);
			initial = bufA[i];
			count = 0;
			for (j = 0; j < len; j++)
			{
				bufB[j] = '\0';
			}
		}	
		
		if (initial == bufA[i])
		{
			int len = strlen(bufB);
			count++;
			bufB[len] = bufA[i];
		}	
	}
	return 0;
}