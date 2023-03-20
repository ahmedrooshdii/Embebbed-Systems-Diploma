/*
 * main.c
 *
 *  Created on: ٢٩‏/٠١‏/٢٠٢٣
 *      Author: ahmed
 */

#include <stdio.h>
int main(){
	int n, sum = 0;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf("%d",&n);

	do{
		sum += n;
	}while(n--);

	printf("Sum = %d",sum);

	return 0;
}
