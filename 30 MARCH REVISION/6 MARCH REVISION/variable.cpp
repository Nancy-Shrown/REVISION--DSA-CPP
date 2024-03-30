#include<iostream>
using namespace std;
int main()
{
    string country;
    cout<<"Enter your country: ";
    cin>>country;
    cout<<"Your country is "<< country<<endl;

    //swap two variables//
    int a,b;
    cout<<"Enter value of a:";
    cin>> a;
    cout<<"Enter value of b:";
    cin>> b;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<"Value of a : "<< a<<endl;
    cout<<"Value of b : "<<b<<endl; 
    return 0;
}