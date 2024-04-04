#include<iostream>
using namespace std;

void circleArea(float r)
    {
        float pi=3.14; 
        cout<<"Area of Circle = "<<pi*r*r;
    }
int main()
{
    float radius;
    cout<<"Enter radius of circle = ";
    cin>>radius;
    circleArea(radius);
    return 0;
}