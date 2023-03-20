/*
 * main.c
 *
 *  Created on: ٢٩‏/٠١‏/٢٠٢٣
 *      Author: ahmed
 */

#include <stdio.h>
int main(){
	int num;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d",&num);

	if(num%2 == 0)
		printf("%d is even.",num);
	else
		printf("%d is odd.",num);

	/********* [Another solution] ***********
	 ****************************************
	 if(num&1)
		printf("%d is odd.",num);
	else
		printf("%d is even.",num);
	*****************************************
	****************************************/

	return 0;
}
