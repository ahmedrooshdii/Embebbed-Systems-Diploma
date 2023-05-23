#include <stdio.h>

int main()
{
	int array[100], num, element, pos;

	//prompt for number of elements
	printf("Enter the number of elements: ");
	fflush(stdout);
	scanf("%d",&num);

	//scanning elements
	for(int i = 0; i < num; i++){
		scanf("%d",&array[i]);
	}

	//prompt for the element
	printf("Enter the element to be inserted: ");
	fflush(stdout);
	scanf("%d",&element);

	//prompt for location
	printf("Enter the location: ");
	fflush(stdout);
	scanf("%d",&pos);

	//insertion operation
	for(int i = num; i >= (pos-1); i--){
		array[i] = array[i-1];
		array[pos-1] = element;
		num++;
	}

	//printing the array
	for(int i = 0; i < num; i++){
		printf("%-4d",array[i]);
	}

	return 0;

}
