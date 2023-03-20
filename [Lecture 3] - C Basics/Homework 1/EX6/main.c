/*
 * main.c
 *
 *  Created on: ٢٩‏/٠١‏/٢٠٢٣
 *      Author: ahmed
 */
#include <stdio.h>
int main(){
	float a,b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);                     // 1
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);                     // 2

	a = a + b;                          // a = 3
	b = a - b;                          // b = 1
	a = a - b;                          // a = 2

	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f\n",b);
	return 0;
}
