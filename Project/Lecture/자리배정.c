//#include <stdio.h>
//#include <stdlib.h>
//
//void main()
//{
//	FILE *f = NULL;
//	f = fopen_s(&f, "input.txt", "r");
//	char C = 0, R = 0, K = 0;
//	int i = 0, j = 0;
//	int output;
//
//	fscanf_s(f, "%d", &C);
//	fscanf_s(f, "%d", &R);
//	fscanf_s(f, "%d", &K);
//
//	printf("공연장의 크기는 %d X %d, 대기번호는 %d이다.", C, R, K);
//
//	/*if (C*R < K)
//	{
//		output = 0;
//	}
//	else
//	{
//		if (i == R&&j == C)
//		{
//			printf("%d %d", j, i);
//		}
//	}		*/
//	fclose(f);
//	system("pause");
//}