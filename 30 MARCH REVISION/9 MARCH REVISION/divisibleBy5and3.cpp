#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number = ";
    cin>>n;
    if(n%3==0 && n%5==0)
    {
        cout<<"Yes "<< n <<" is divisible by 3 and 5 ";
    }
    else
    {
        cout<<"No "<< n <<" is not divisible by 3 and 5";

    }
    return 0;
}