#include <stdio.h>
#include <stdlib.h>
#include <string>
#define SN_SIZE 5	//л

struct score
{
	double test[SN_SIZE][4];	//
	double avr[4];	//  
	double sum[SN_SIZE];	//
	double soa;	// 
}ss;

typedef struct student_infor //л
{
	int number;  //й
	char name[20];  //̸
	struct score sc;
}SI;

void add_record(SI list[]);	//й,̸, 
void average();	//   ϴ Լ
void sumscore(int st);	// ϴ Լ
void fail(SI list[]);	// л ϴ Լ
void sum_of_avr(SI list[]);	// 

int main(void)
{
	SI list[SN_SIZE] = { '\0' };	//л(ü) лŭ 迭
	int st = 0;

	add_record(list);
	average();
	sumscore(st);
	fail(list);
	sum_of_avr(list);

	system("pause");
	return 0;
}

void add_record(SI list[])
{
	int i, j;
	for (i = 0; i < SN_SIZE; i++)
	{
		printf("й ԷϽÿ: \n");
		scanf_s("%d", &list[i].number);
		fflush(stdin);
		printf("̸ ԷϽÿ: \n");
		gets_s(list[i].name);
		for (j = 0; j < 4; j++)
		{
			printf("л    ԷϽÿ: \n");
			scanf_s("%lf", ss.test[i][j]);
		}
	}
}

void average()
{
	int i, j;
	ss;
	double a = 0;
	for (i = 0; i < SN_SIZE; i++)
	{
		for (j = 0; j < 4; j++)
		a = a + ss.test[j][i];
		ss.avr[i] = a / SN_SIZE;  
	}
	for (i = 0; i < SN_SIZE; i++)
		printf(": %.1lf\n", ss.avr[i]);
}

void sumscore(int st)
{
	int i;
	ss;
	double temp = 0, temp_score = ss.test[st][0];

	for (i = 0; i < 3; i++)	//ּڰ Ѵ.
	{
		if (temp_score > ss.test[st][i + 1])
		{
			temp_score = ss.test[st][i + 1];
			temp = i + 1;
		}
	}
	for (i = 0; i < 4; i++)	//ּڰ   3  Ѵ.
	{
		if (i != temp)
			ss.sum[st] += ss.test[st][i];
	}
	ss.sum[st] /= 3;
	printf(" : %.1lf\n", ss.sum);
}

void fail(SI list[])
{
	int i;
	SI si;
	double t[1] = { 60 };
	for (i = 0; i < SN_SIZE; i++)
	{
		if (ss.sum[i] < t[1])
		{
			printf(" л: %c  %.1lf",si.name,ss.sum);
		}
	}
}

void sum_of_avr(SI list[])
{
	int i;
	for (i = 0; i < SN_SIZE; i++)
	{
		ss.soa += ss.sum[i];
	}
	ss.soa /= SN_SIZE;
	printf(" : %.1lf\n", ss.soa);
}
