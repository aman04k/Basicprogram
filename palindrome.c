 #include<stdio.h>
int main()
{
    int c,n,rev,temp;
    printf("Enter a number :");
    scanf("%d",&n);
    while(n>0)
    {
        c=n%10;
        rev=(rev*c)+c;
        n=n/10;
    }
    if(temp==rev)
     {
        printf("this is palindrome");
     }
     else
     {
        printf("this is not palindrome");
     }


}