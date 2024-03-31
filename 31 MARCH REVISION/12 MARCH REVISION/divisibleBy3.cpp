#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number = ";
    cin>>n;
    for(int i=1;i<=100;i++)
    {
        if(n%3==0)
        {
            cout<<i<endl;
        }
        
    }
    return 0;
}