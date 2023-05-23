#include <stdio.h>

int main()
{
	int rows, cols;

	//prompt
	printf("Enter the number of rows and columns:");
	fflush(stdout);
	scanf("%d",&rows);
	scanf("%d",&cols);
	int matrix[rows][cols],tmatrix[cols][rows];

	//reading the matrix
	printf("\nElements of the matrix\n");
	fflush(stdout);
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}

	//transpose the matrix
	for(int i = 0; i < cols; i++){
		for(int j = 0; j < rows; j++)
		{
			tmatrix[i][j] = matrix[j][i];
		}
	}

	//printing the original matrix
	printf("\nEntered matrix\n");
	for(int i = 0; i < rows; i++)
		for(int j = 0; j < cols; j++)
		{
			if(j == 0 && i != 0){
				printf("\n");
				fflush(stdout);
			}
			printf("%-5d",matrix[i][j]);
		}

	//printing the transposed matrix
	printf("\nTransposed matrix\n");
	for(int i = 0; i < cols; i++)
		for(int j = 0; j < rows; j++)
		{
			if(j == 0 && i != 0){
				printf("\n");
				fflush(stdout);
			}
			printf("%-5d",tmatrix[i][j]);
		}

	return 0;

}
