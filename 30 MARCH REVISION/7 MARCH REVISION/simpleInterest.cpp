#include<iostream>
using namespace std;

int main()
{
    float p,r,t,SI;
    cout<<"Enter Principle = ";
    cin>>p;
    cout<<"Enter Rate = ";
    cin>>r;
    cout<<"Enter Time = ";
    cin>>t;
    SI=(p*r*t)/100;
    cout<<"Simple Interest = "<<SI;

    return 0;
}