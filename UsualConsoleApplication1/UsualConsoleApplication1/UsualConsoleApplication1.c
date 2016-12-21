// UsualConsoleApplication1.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "targetver.h"
#include "stdlib.h"

#include "math.h"
#include "stdio.h"
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	int i = 0,x=0;
	long dian[10][2] = {0},k=0,b=0;
	while (scanf_s("%ld %ld", &dian[i][0], &dian[i][1]) == 2 && i < 10)  i++;

	for(int g=0;g < 10;g++)
	{
		printf("%ld %ld\n", dian[i][0], dian[i][1]);
	}
	printf("hello word%d",x);
	system("pause");
	
    return 0;
}

