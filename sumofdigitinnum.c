#include<stdio.h>
int main()
{
    int c,n,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    while(n>0)
    {
        c=n%10;
        sum=sum+c;
        n=n/10;
    }
    printf("sum is=%d",sum);

}