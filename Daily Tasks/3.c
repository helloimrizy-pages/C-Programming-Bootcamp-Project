/*
    3.  Create a program which transforms the number of days to years, weeks and days.
        For example: 375 days = 1 year 1 week 3 days. Use the remainder of the bigger unit.
*/

#include<stdio.h>

int main(){
    int days1, days2, years, weeks;

    printf("Hi, this program will convert number of days to years, weeks, and days");
    printf("\nEnter number of days: ");
    scanf("%d", &days1);

    years = days1/365;
    weeks = ((days1%365)/7);
    days2 = (days1-((years*365)+(weeks*7)));

    printf("%d days = %d year %d week %d days.", days1, years, weeks, days2);

    return 0;
}
