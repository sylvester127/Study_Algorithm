#include <stdio.h>
#include <stdlib.h>
#include <string>
#define SN_SIZE 5	//학생수

struct score
{
	double test[SN_SIZE][4];	//시험점수
	double avr[4];	//매 시험의 평균점수
	double sum[SN_SIZE];	//최종성적
	double soa;	//최종성적의 평균
}ss;

typedef struct student_infor //학생정보
{
	int number;  //학번
	char name[20];  //이름
	struct score sc;
}SI;

void add_record(SI list[]);	//학번,이름,시험점수 기록
void average();	//매 시험의 평균 구하는 함수
void sumscore(int st);	//최종성적 구하는 함수
void fail(SI list[]);	//낙제한 학생 구하는 함수
void sum_of_avr(SI list[]);	//최종성적의 평균

int main(void)
{
	SI list[SN_SIZE] = { '\0' };	//학생정보(구조체)를 학생수만큼 배열
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
		printf("학번을 입력하시오: \n");
		scanf_s("%d", &list[i].number);
		fflush(stdin);
		printf("이름을 입력하시오: \n");
		gets_s(list[i].name);
		for (j = 0; j < 4; j++)
		{
			printf("학생의 시험 점수를 순서대로 입력하시오: \n");
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
		printf("평균점수: %.1lf\n", ss.avr[i]);
}

void sumscore(int st)
{
	int i;
	ss;
	double temp = 0, temp_score = ss.test[st][0];

	for (i = 0; i < 3; i++)	//최솟값을 구한다.
	{
		if (temp_score > ss.test[st][i + 1])
		{
			temp_score = ss.test[st][i + 1];
			temp = i + 1;
		}
	}
	for (i = 0; i < 4; i++)	//최솟값을 뺀 나머지 3개의 수를 더한다.
	{
		if (i != temp)
			ss.sum[st] += ss.test[st][i];
	}
	ss.sum[st] /= 3;
	printf("최종 성적: %.1lf\n", ss.sum);
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
			printf("낙제한 학생: %c 점수 %.1lf",si.name,ss.sum);
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
	printf("최종성적의 평균: %.1lf\n", ss.soa);
}
