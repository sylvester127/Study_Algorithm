#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f;
	freopen_s(&f, "input.txt", "r", stdin);
	freopen_s(&f, "output.txt", "w", stdout);

	int num, i, j, temp;
	int *arr;

	scanf_s("%d", &num);
	
	arr = (int *)malloc(sizeof(int)*num);

	for (i = 0; i < sizeof(arr); i++)
	{
		scanf_s("%d", &arr[i]);
		printf("%d ", arr[i]);
	}

	/*for (i=0;i<sizeof(arr)-1;i++)
	{
		for(j=0;j<sizeof(arr)-i;j++)
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
	}

	for (i = 0; i < sizeof(arr); i++)
		printf("%d ", arr[i]);*/

	return 0;
}