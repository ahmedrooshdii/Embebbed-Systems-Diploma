#include <stdio.h>
#include <string.h>

int main()
{
	char array[100], c;
	int count = 0;

	//prompt
	printf("Enter a string: ");
	fflush(stdout);
	//reading the string until a newline character is encountered
	gets(array);

	//prompt for character
	printf("Enter a character to find its frequency: ");
	fflush(stdout);
	scanf("%c",&c);

	//counting frequency
	for(int i = 0; i < strlen(array); i++){
		if(array[i] == c)
			count++;
	}

	//printing
	printf("Frequency of %c is: %d",c,count);
	return 0;

}
