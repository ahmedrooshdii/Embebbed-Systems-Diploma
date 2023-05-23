#include <stdio.h>
#include <string.h>

void reverse(void);

int main()
{
	printf("Enter a sentence: ");
	fflush(stdout);
	reverse();
	return 0;
}

void reverse(void){
	char c;
	scanf("%c",&c);
	if(c != '\n')
		reverse();
	printf("%c",c);
}
