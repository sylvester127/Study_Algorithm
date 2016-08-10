#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
	int score;
	char name[10];
}student;

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int n, ramk, i, j;
	student list[10];

	scanf_s("%d", &n);

	for(i=0;i<n;i++)
		scanf_s("%s %d", list[i].name, &list[i].score);
	for (i = 0; i<n; i++)
		printf("%s %d\n", list[i].name, list[i].score);

	return 0;
}