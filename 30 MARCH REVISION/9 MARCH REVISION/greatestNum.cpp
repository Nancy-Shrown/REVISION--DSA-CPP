#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter value of a = ";
    cin>>a;
    cout<<"Enter value of b = ";
    cin>>b;
    cout<<"Enter value of c = ";
    cin>>c;

    if(a>b)
    {
        cout<<"a is greater";
    }
    else if(b>c)
    {
        cout<<"b is greater";

    }
    else
    {
        cout<<"c is greater";
    }
    return 0;
}