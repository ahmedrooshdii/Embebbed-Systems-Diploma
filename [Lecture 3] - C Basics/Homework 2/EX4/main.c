/*
 * main.c
 *
 *  Created on: ٢٩‏/٠١‏/٢٠٢٣
 *      Author: ahmed
 */

#include <stdio.h>
int main(){
	float num;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f",&num);

	if(!num)
		printf("You entered zero.");
	else if(num < 0)
		printf("%2f is negative.",num);
	else
		printf("%.2f is negative.",num);


	return 0;
}
