#include<iostream>
using namespace std;
 
int main()
{ 
    int i,n; 
    cout<<"Enter a number : ";
    cin>>n;
    for(i = 1; i <= n; i += 2)
    { 
        cout<<i<<" "; 
    } 
    return 0;
}