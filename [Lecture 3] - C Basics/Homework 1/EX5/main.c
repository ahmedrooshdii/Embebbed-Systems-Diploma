/*
 * main.c
 *
 *  Created on: ٢٩‏/٠١‏/٢٠٢٣
 *      Author: ahmed
 */
#include <stdio.h>
int main(){
	unsigned char c;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c = %d",c,c);
	return 0;
}
