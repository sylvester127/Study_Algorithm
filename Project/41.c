#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
	char name[10];
	int score;
	int rank;
}student;

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	student *list;
	int N;
	char tempName[10];
	int i, j;
	
	scanf_s("%d", &N);
	list = (student*)malloc(sizeof(student)*N);
	
	for (i = 0; i < N; i++)
	{
		list[i].rank = 1;		
		scanf_s("%s %d", tempName, sizeof(tempName), &list[i].score);
		strcpy_s(list[i].name, sizeof(list[i].name), tempName);
	}

	for (i = 0; i < N; i++)
	{
		for (j = 1; j < N; j++)
		{
			if (list[i].score < list[j].score)
			{
				list[i].rank++;
			}
		}
	}

	for (i = 0; i < N; i++)
		printf("%d ", list[i].rank);

	return 0;
}