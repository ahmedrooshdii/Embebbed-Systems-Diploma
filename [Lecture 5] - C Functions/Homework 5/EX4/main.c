#include <stdio.h>
#include <string.h>

int power(int base, int e);

int main()
{
	int b, e;
	printf("Enter the base number: ");
	fflush(stdout);
	scanf("%d",&b);
	printf("Enter the power number (positive): ");
	fflush(stdout);
	scanf("%d",&e);
	printf("%d ^ %d = %d",b,e,power(b,e));
	return 0;
}

int power(int base, int e){
	if(e == 0)
		return 1;
	else if(e == 1)
		return base;
	else
		return base * power(base, e-1);
}
