#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;

    cout<<"Sum = "<<(c=a+b)<<endl;
    cout<<"Subtract = "<<(c=a-b)<<endl;
    cout<<"Multiply = "<<(c=a*b)<<endl;
    cout<<"Divide = "<<(c=a/b)<<endl;

    return 0;
}