#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
	int x;
	struct NODE *next;
}NODE;

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int a;
	NODE *arrA, *arrB;
	arrA = (NODE*)malloc(sizeof(NODE));
	arrB = (NODE*)malloc(sizeof(NODE));
	arrA->next = NULL;
	arrB->next = NULL;

	while (1)
	{
		scanf_s("%d", &a);
		if (a == 0)
			break;
		
		NODE *temp = (NODE*)malloc(sizeof(NODE));
		temp->next = arrA->next;
		temp->x = a;
		arrA->next = temp;
	}


	for (arrB = arrA->next; arrB; arrB = arrB->next)
	{
		printf("%d ", arrA->x);
	}
	return 0;
}