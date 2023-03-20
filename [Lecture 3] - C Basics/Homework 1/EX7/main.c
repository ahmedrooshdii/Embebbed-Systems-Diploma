/*
 * main.c
 *
 *  Created on: ٢٩‏/٠١‏/٢٠٢٣
 *      Author: ahmed
 */

/****************************************************************
 I solved EX5 With real swap like this but with another operation
****************************************************************/


#include <stdio.h>
int main(){
	float a,b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);                     // 1
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);                     // 2

	a = a * b;                          // a = 1 * 2 = 2
	b = a / b;                          // b = 2 / 2 = 2
	a = a / b;                          // a = 2 / 2 = 1

	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f\n",b);
	return 0;
}
