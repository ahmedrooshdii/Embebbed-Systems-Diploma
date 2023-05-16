#include <stdio.h>
#include <string.h>

int main()
{
	char string[50], temp[50];

	//prompt for a string
	printf("Enter the string: ");
	fflush(stdout);
	scanf("%s",string);

	//reverse
	int length = strlen(string);
	for(int i = 0; i < length; i++){
		temp[i] = string[(strlen(string)-1)-i];
	}

	// Add null character at the end
	temp[length] = '\0';

	//printing the reversed string
	printf("The reversed string: %s",temp);
	return 0;

}
