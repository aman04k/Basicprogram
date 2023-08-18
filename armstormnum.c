#include<stdio.h>
int main()
{
    int n,arm=0,r,c;
    printf("enter a number: ");
    scanf("%d",&n);
   c=n;
    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;

    }
    if(c==arm)
    
        printf("this is armstome number: ");
    
    else
    
        printf("this is not  armstome number: ");
    
}