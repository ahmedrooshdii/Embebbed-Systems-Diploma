#include <stdio.h>


int factorial(int num){
	if(num <= 1)
		return 1;
	else
		return num * factorial(num-1);
}
int main()
{
	int a;
	printf("Enter a positive integer: ");
	fflush(stdout);
	scanf("%d",&a);

	printf("Factorial of %d is %d.",a,factorial(a));
	return 0;
}
