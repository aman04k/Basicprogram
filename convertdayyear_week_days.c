#include<stdio.h>
int main()
{
    int n,year,week,days;
    printf("enter a days :");
    scanf("%d",&n);
    year=n/365;
    week=(n%365)/7;
    days=(n%365)%7;
    printf("%d = %d year,%d week,%d days\n",n,year,week,days);
}