#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a value a and b : ";
    cin>>a>>b;
    char op;
    cout<<"Enter the opreator";
    cin>>op;
    switch(op){ 
        case '+': cout<<(a+b)<<endl;
              break;
        case '-': cout<<(a-b)<<endl;
              break;
        case '*': cout<<(a*b)<<endl;
              break;
        case '/': cout<<(a/b)<<endl;
              break; 
   }                   
}