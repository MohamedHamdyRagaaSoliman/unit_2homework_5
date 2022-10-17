/*
 * hw5ex.5.c
 *
 *  Created on: Oct 18, 2022
 *      Author: 20101
 */
#include <stdio.h>
#define p 3.14
#define area(r) p*r*r

int main() {
			float rad;
			printf("enter the radiuos \n");
			fflush(stdout);fflush(stdin);
			scanf("%f" , &rad);
			printf("the area = %.1f " , area(rad));

}

