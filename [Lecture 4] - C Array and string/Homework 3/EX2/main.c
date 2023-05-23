#include <stdio.h>

int main()
{
	int num;
	float data, average = 0;

	//prompt user to enter the number of elements
	printf("Enter the number of data:");
	fflush(stdout);
	scanf("%d",&num);

	//reading numbers
	for(int i = 0; i < num; i++){
		float temp;
		printf("Enter number %d:", i+1);
		fflush(stdout);
		scanf("%f",&temp);
		data += temp;
	}

	//calculate average
	average = data / num;

	printf("Average = %.2f\n",average);
	return 0;

}
