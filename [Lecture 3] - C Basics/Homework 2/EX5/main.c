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

	if(((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		printf("%c is an alphabet.",c);
	else
		printf("%c is not an alphabet.",c);
	return 0;
}
