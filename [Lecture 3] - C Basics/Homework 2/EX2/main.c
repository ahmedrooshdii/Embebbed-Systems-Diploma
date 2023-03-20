/*
 * main.c
 *
 *  Created on: ٢٩‏/٠١‏/٢٠٢٣
 *      Author: ahmed
 */

#include <stdio.h>
int main(){
	unsigned char c;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c",&c);

	switch(c)
	{
	case 'a':
		printf("%c is a vowel.",c);
		break;
	case 'e':
		printf("%c is a vowel.",c);
		break;
	case 'i':
		printf("%c is a vowel.",c);
		break;
	case 'o':
		printf("%c is a vowel.",c);
		break;
	case 'u':
		printf("%c is a vowel.",c);
		break;
	default:
		printf("%c is a consonant.",c);
	}

	return 0;
}
