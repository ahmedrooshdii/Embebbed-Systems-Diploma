#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int index = 0;

	//prompt for a string
	printf("Enter a string: ");
	fflush(stdout);
	gets(string);

	//count characters == finding the length
	while(string[index] != '\0'){
		index++;
	}

	//printing the length
	printf("The length is the string: %d",index);
	return 0;

}
