#include <stdio.h>


int isPrime(int num){
	 if(num <= 1)
		 return 0;
	 else
		 for(int i = 2; i < num/2; i++){
			 if(num % i == 0){
				 return 0;
			 }else{
				 return 1;
			 }
		 }
}

int main()
{
	int a, b;
	printf("Enter two numbers (intervals): ");
	fflush(stdout);
	scanf("%d%d",&a,&b);

	for(int i = a; i < b; i++){
		if(isPrime(i)){
			printf("%-4d",i);
		}
	}
	return 0;
}
