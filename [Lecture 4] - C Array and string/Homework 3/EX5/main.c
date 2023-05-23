#include <stdio.h>

int main()
{
	int array[100], num, element, pos = -1;

	//prompt for number of elements
	printf("Enter the number of elements: ");
	fflush(stdout);
	scanf("%d",&num);

	//scanning elements
	for(int i = 0; i < num; i++){
		scanf("%d",&array[i]);
	}

	//prompt for the element
	printf("\nEnter the element to be searched: ");
	fflush(stdout);
	scanf("%d",&element);

	//searching
	for(int i = 0; i < num; i++)
		if(array[i] == element){
			pos = i+1;
			break;
		}

	//printing the result
	if(pos == -1)
		printf("Not Found.");
	else
		printf("The element is fount at the location %d.",pos);

	return 0;

}
