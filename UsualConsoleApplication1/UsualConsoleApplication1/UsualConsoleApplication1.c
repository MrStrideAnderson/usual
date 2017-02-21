// UsualConsoleApplication1.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "targetver.h"
#include "stdlib.h"

#include "math.h"
#include "stdio.h"
#define _CRT_SECURE_NO_WARNINGS

//
//int main()
//{
//	int i = 0, x = 0;
//	long dian[10][2] = { 0 }, k = 0, b = 0;
//	while (scanf_s("%ld %ld", &dian[i][0], &dian[i][1]) == 2 && i < 10)  i++;
//
//	for (int g = 0; g < 10; g++)
//	{
//		printf("%ld %ld\n", dian[i][0], dian[i][1]);
//	}
//	printf("hello word%d", x);
//	system("pause");
//
//	return 0;
//}

#include "stdio.h"

int main( int a,char* arg[])
{
	while (1)
	{

		int hour1, minute1;
		int hour2, minute2;

		scanf_s("%d%d\n", &hour1, &minute1);
		scanf_s("%d%d", &hour2, &minute2);

		int t1 = hour1 * 60 + minute1;
		int t2 = hour2 * 60 + minute2;

		int t = t1 - t2;


		printf("时间差是%d小时%d分钟\n", t / 60, t % 60);
		for (int i = 0;i<=a;i++)
		{
	printf("%s\n", arg[i]);
		}
		
		system("pause");

	}
	return 0;
}
