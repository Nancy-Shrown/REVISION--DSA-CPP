#include<iostream>
using namespace std;
int main()
{
    int array[]= {6,4,2,1};
    int size=sizeof(array)/sizeof(array[0]);
    int product=1;

    for(int idx=0;idx<size;idx++)
    {
        product= product*array[idx];
    }
    cout<<"Product of elements="<<product;
    return 0;
}