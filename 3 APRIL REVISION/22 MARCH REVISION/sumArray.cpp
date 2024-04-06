#include<iostream>
using namespace std;
int main()
{
    int array[]= {65,52,16,25,59};
    int size=sizeof(array)/sizeof(array[0]);
    int sum=0;

    for(int idx=0;idx<size;idx++)
    {
        sum= sum+array[idx];
    }
    cout<<"Sum of elements="<<sum;
    return 0;
}