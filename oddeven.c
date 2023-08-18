#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("this number is even %d =  ",n);
    }
    else
    {
        printf("This is number is odd %d = ",n);
    }
    printf("\n");
}