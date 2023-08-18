#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a two number:\n ");
    scanf("%d%d",&a,&b);
    printf("The value  a is %d and b is %d before swaping\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value  a is %d and b is %d after swaping\n",a,b);


}