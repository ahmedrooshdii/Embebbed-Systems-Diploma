/*
 * main.c
 *
 *  Created on: ٢٩‏/٠١‏/٢٠٢٣
 *      Author: ahmed
 */

#include <stdio.h>
int main(){
	char c;
	float op1, op2;
	printf("Enter an operator either + or - or * or divide: ");
	fflush(stdout);
	scanf("%c",&c);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f%f",&op1,&op2);

	switch(c){
	case '+':
		printf("%f + %f = %f",op1,op2,op1+op2);
		break;
	case '-':
		printf("%f - %f = %f",op1,op2,op1-op2);
		break;
	case '*':
		printf("%f * %f = %f",op1,op2,op1*op2);
		break;
	case '/':
		printf("%f / %f = %f",op1,op2,op1/op2);
		break;
	default:
		printf("Try again.");
	}

	return 0;
}
