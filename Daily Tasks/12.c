/*
    12. Write a program, which writes the even elements of an integer array to a file called "even_numbers.txt".
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fp;
    int arr[5], i;
    fp = fopen("even_numbers.txt", "w");

    printf("Enter 5 numbers into the list:\n");
    for(i=0; i<5; i++)
        scanf("%d", &arr[i]);

    fprintf(fp, "The even elements from the list:\n");

    for(i=0; i<5; i++)
    {
        if(arr[i]%2==0)
        {
            fprintf(fp, "%d\n", arr[i]);
        }
    }
    getch();
    printf("The numbers have been imported to the .txt file.");
    fclose(fp);

    return 0;
}
