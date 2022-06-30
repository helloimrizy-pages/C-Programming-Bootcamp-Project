/*
    7. Write a function which computes the length of a string.
*/

int main()
{
  	char firstInput[200], secondInput[200];

  	printf("\n Please input a string: ");
  	scanf("%s", firstInput);

  	printf("\n Please input one more string: ");
  	scanf("%s", secondInput);

  	concatenate(firstInput, secondInput);

  	printf("\n You inputed: %s", firstInput);
    printf("\n The length of your string = %ld\n", strlen(firstInput));

  	return 0;
}

void concatenate(char *firstInput, char *secondInput)
{
	while(*firstInput)
	{
		firstInput++;
	}

	while(*secondInput)
	{
		*firstInput = *secondInput;
		*firstInput++;
		*secondInput++;
  	}
  	*firstInput = '\0';
}
