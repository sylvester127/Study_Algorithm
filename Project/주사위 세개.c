//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	//FILE *fIn = fopen("input.txt", "r");
//	//FILE *fOut = fopen("output.txt", "w");	
//	
//	int a = 0, b = 0, c = 0, prize = 0;	
//
//	scanf_s("%d %d %d", &a, &b, &c);
//	
//
//	if (a == b&&b == c)
//	{
//		prize = 10000 + (a * 1000);
//	}
//	else if (a == b || b == c || c == a)
//	{
//		if (a == b)
//			prize = 1000 + (a * 100);
//		else
//			prize = 1000 + (c * 100);
//	}
//	else
//	{
//		int tmp = 0;
//		tmp = max(a, b);
//		tmp = max(tmp, c);
//		prize = tmp * 100;
//	}	
//	printf("%d", prize);
//	system("pause");
//	return 0;
//}