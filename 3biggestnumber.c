#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter a three number : ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if((n1>n2) && (n1>n3))
    {
        printf("%d is biggest \n",n1);
    }
    else if((n2>n1) && (n2>n3))
    {
        printf("%d is biggest \n",n2);
    }
    else
    {
       printf("%d is biggest \n",n3);
    }
}