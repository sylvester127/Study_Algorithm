#include <stdio.h>
#include "FileIO.h"

int main()
{
    FileIO();
    int month;

	while (1)
	{
		scanf("%d", &month);
		if (month == 0)
			break;
		switch (month)
		{
		case 1:
			printf("%d - 31\n", month);
			break;
		case 2:
			printf("%d - 28\n", month);
			break;
		case 3:
			printf("%d - 31\n", month);
			break;
		case 4:
			printf("%d - 30\n", month);
			break;
		case 5:
			printf("%d - 31\n", month);
			break;
		case 6:
			printf("%d - 30\n", month);
			break;
		case 7:
			printf("%d - 31\n", month);
			break;
		case 8:
			printf("%d - 30\n", month);
			break;
		case 9:
			printf("%d - 31\n", month);
			break;
		case 10:
			printf("%d - 30\n", month);
			break;
		case 11:
			printf("%d - 31\n", month);
			break;
		case 12:
			printf("%d - 30\n", month);
			break;
		default:
			printf("%d - 99\n", month);
			break;
		}
	}
	return 0;
}
