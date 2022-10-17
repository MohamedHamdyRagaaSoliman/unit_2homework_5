/*
 * hw5ex1.c
 *
 *  Created on: Oct 14, 2022
 *      Author: 20101
 */
#include"stdio.h"
#include"math.h"
struct sstudent
{
	char name[50];
	int roll;
	float mark;
} s ;
int main()
{
	printf("enter your name : \n ");
	fflush(stdout); fflush(stdin);
	scanf("%s" , s.name);
	printf("enter your roll : \n ");
	fflush(stdout); fflush(stdin);
	scanf("%d" , &s.roll);
	printf("enter your mark : \n ");
	fflush(stdout); fflush(stdin);
	scanf("%f" , &s.mark);
	printf("your info is : \n");
	fflush(stdout); fflush(stdin);
	printf("your name :  %s \n" , s.name);
	fflush(stdout); fflush(stdin);
	printf("your roll :  %d \n " , s.roll);
	fflush(stdout); fflush(stdin);
	printf("your mark :  %f \n" , s.mark);


}

