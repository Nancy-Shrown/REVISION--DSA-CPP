#include<iostream>
using namespace std;

int main()
{
    int l,b,area,perimeter;
    cout<<"Enter length = ";
    cin>>l;
    cout<<"Enter breadth = ";
    cin>>b;
    //area of rectangle
    area = l*b;
    //perimeter of rectangle
    perimeter = 2*(l+b);
    if(area>perimeter)
    {
        cout<<"Area of rectangle is greater than its perimeter";
    }
    else if(area<perimeter)
    {
        cout<<"Perimeter of rectangle is greater than its area";
    }
    else
    {
        cout<<"Area of rectangle is equal to its perimeter";
    }
    return 0;
}