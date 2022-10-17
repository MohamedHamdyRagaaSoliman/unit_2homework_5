/*
 * hw5ex3.c
 *
 *  Created on: Oct 14, 2022
 *      Author: 20101
 */
#include"stdio.h"
#include"math.h"
struct comp
{
	float r;
	float i;
} n1 , n2 , t , num1 , num2 , temp ;
struct comp sumcomp(struct comp n1 , struct comp n2)
{
	t.r=n1.r+n2.r;
	t.i=n1.i+n2.i;
	return t;

}
int main()
{
printf("for first compkex number enter the real and imaj number :\n ");
fflush(stdout); fflush(stdin);
scanf("%f %f" , &num1.r,&num1.i);
printf("for second compkex number enter the real and imaj number :\n ");
fflush(stdout); fflush(stdin);
scanf("%f %f" , &num2.r,&num2.i);
temp=sumcomp(num1 , num2);
printf("sum = %.1f + %.1fi  " , temp.r , temp.i );



}

