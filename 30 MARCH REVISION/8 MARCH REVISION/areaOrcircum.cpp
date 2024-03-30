#include<iostream>
using namespace std;

int main()
{
    float r,area,pi=3.14,circumference;
    cout<<"Enter radius = ";
    cin>>r;
    area= pi*r*r;
    cout<<"Area of Circle = "<<area<<endl;
    circumference= 2*pi*r;
    cout<<"Circumference of Circle = "<<circumference<<endl;

    if(area>circumference)
    {
        cout<<"Area of Circle Is Greater"<<endl;
    }
    else if(area < circumference)
    {
        cout<<"Circumference of Circle Is Greater"<<endl;
    }
    else
    {
        cout<<"Area of Circle Is equal to Circumference of Circle"<<endl;
    }

    return 0;
}