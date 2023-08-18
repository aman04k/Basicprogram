#include<stdio.h>
int main()
{
    int year;
    printf("enter a year :");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("This is a leap year\n ",year);
        
    }
    else if(year%100==0)
    {
        printf("this is not leap year\n",year);
    }
   else if(year%4==0)
    {
        printf("this  is a leap year");
    }
    else 
    {
        printf("this  is not a leap year");
    }
}