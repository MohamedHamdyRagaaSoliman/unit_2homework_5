/*
 * hw5ex2.c
 *
 *  Created on: Oct 14, 2022
 *      Author: 20101
 */
#include"stdio.h"
#include"math.h"
struct sdistance
{
	float inch;
	int ft;
} d1 , d2 , sum ;
int main()
{
	printf("enter info of distance : \n  enter 1 distsnce of ft: \n ");
	fflush(stdout); fflush(stdin);
	scanf("%d" , &d1.ft);
	printf("enter inch : \n");
	fflush(stdout); fflush(stdin);
	scanf("%f" , &d1.inch);
	printf("enter info of distance : \n  enter 2 distsnce of ft: \n ");
	fflush(stdout); fflush(stdin);
	scanf("%d" , &d2.ft);
	printf("enter inch : \n");
	fflush(stdout); fflush(stdin);
	scanf("%f" , &d2.inch);
	sum.ft=d1.ft+d2.ft;
	sum.inch=d1.inch+d2.inch;
	if(sum.inch>12.0)
	{
		sum.inch-=12;
		++sum.ft;
	}
	printf("the sum of distance = %d\'-%.1f\"" , sum.ft , sum.inch);

}

