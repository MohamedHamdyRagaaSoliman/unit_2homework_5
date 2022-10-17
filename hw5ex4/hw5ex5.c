/*
 * hw5ex5.c
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
} s[10] ;
int main()
{
	int i;
	printf("enter info for student : \n");
	fflush(stdout);fflush(stdin);

	for(i=0;i<3;i++)
	{
	s[i].roll=i+1;
	printf("for roll number %d\n" , s[i].roll);
	fflush(stdout);fflush(stdin);
	printf("enter name : \n");
	fflush(stdout);fflush(stdin);
	scanf("%s" , s[i].name);
	printf("enter mark : \n");
	fflush(stdout);fflush(stdin);
	scanf("%f" , &s[i].mark);
	printf("\n");
	}
	printf("displaying data : \n ");

	for(i=0;i<3;i++)
	{
		printf("info for roll number : %d " , i+1);
		printf("name : \n %s \n mark : \n %.1f" ,s[i].name , s[i].mark );
	}




}



