#include<iostream>
using namespace std;
 
int main()
{
    int i,n,s=1;
    cout<<"Enter Number = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<s<<endl;
        s=s*2;
    }
    return 0;
}