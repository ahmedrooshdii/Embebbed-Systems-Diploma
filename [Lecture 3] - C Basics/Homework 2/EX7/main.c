/*
 * main.c
 *
 *  Created on: ٢٩‏/٠١‏/٢٠٢٣
 *      Author: ahmed
 */

#include <stdio.h>
int main(){
	int n;
	unsigned long long factorial = 1;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf("%d",&n);

	if(n > 0){
		while(--n){
			factorial *=n;
		}
		printf("Factorial = %lld",factorial);
	}else{
		printf("Error!!! Factorial of negative number doesn't exist.");
	}

	return 0;
}
