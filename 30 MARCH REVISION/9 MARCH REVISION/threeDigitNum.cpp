#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number = ";
    cin>>n;
    if(n>=99 && n<=1000)
    {
        cout<<"Yes "<< n <<" is three digit number";
    }
    else
    {
        cout<<"No "<< n <<" is not three digit number";

    }
    return 0;
}