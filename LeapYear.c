#include <stdio.h>
int main(void)
{
    int year;
    printf("Enter the year to check whether the year is Leap year or not : ");
    scanf("%d",&year);
    if(year%4==0&&year%100!=0 || year%400==0)
    {
       printf("Yes Entered year %d is a Leap Year",year);
    }
    else
    {
       printf("No it is not an Leap year ");
    }
    return 0;
}
