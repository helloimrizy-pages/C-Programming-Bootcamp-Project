/*
    10. Create a program which prints the second greatest element of an array.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
	int arr[100], i, sizeOfArray;
	int first, second;

	printf("\nPlese enter the size of array: ");
	scanf("%d", &sizeOfArray);

	printf("Please enter %d elements of the array: \n", sizeOfArray);

	for (i = 0; i < sizeOfArray; i++)
	{
		scanf("%d", &arr[i]);
  }

	first = second = INT_MIN;

	for (i = 0; i < sizeOfArray; i++)
	{
		if(arr[i] > first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second && arr[i] < first)
		{
			second = arr[i];
		}
	}
	printf("\nThe second greatest element of the array =  %d", second);

	return 0;
}
