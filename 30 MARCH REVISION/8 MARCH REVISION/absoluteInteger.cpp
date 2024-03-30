#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter any integer = ";
    cin>>N;

    if (N < 0) 
	{ 
		N = (-1) * N; 
	} 
	cout << "Absolute integer = " << N; 

    return 0;
}