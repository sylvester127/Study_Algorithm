#include <stdio.h>
#include <stdlib.h>
#include "FileIO.h"
int arr[3];

int cmp(int *i,int *j)
{
    if(*i>*j) return 1;
    else if(*i<*j) return -1;
    else return 0;
}

int main()
{
    FileIO();
	
    for(int i=0;i<3;i++)
        scanf("%d", &arr[i]);
    qsort(arr, sizeof(arr)/sizeof(int), sizeof(int), cmp);
	
    printf("%d ", arr[2]);
	return 0;
}
