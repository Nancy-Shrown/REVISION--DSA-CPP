#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter value of X co-ordinate = ";
    cin>>x;
    cout<<"Enter value of Y co-ordinate = ";
    cin>>y;
    if(x==0)
    {
        cout<<"Point lies in Y axis"<<"("<<x<<","<<y<<")"<<endl;
    }
    else if(y==0)
    {
        cout<<"Point lies in X axis"<<"("<<x<<","<<y<<")"<<endl;
    }
    else if(x==0 && y==0)
    {
        cout<<"Point lies in origin "<<"("<<x<<","<<y<<")"<<endl;
    }
    else
    {
        cout<<"Point lies inside plane"<<"("<<x<<","<<y<<")"<<endl;
    }
    return 0;
}