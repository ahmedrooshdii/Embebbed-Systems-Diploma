#include <stdio.h>

int main()
{
	float a[2][2], b[2][2], c[2][2];

	printf("Enter the elements of 1th matrix\n");
	fflush(stdout);
	//reading the first matrix
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&a[i][j]);
		}

	printf("\nEnter the elements of 2nd matrix\n");
	fflush(stdout);
	//reading the second matrix
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&b[i][j]);
		}

	//operate addition operation
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}

	printf("\nThe sum of matrices\n");
	fflush(stdout);
	//printing the result
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
		{
			if(j == 0 && i !=0){
				printf("\n");
				fflush(stdout);
			}
			printf("%-7.1f",c[i][j]);
		}

	return 0;

}
