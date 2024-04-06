#include<iostream>
using namespace std;
int main()
{
    int array[]={52,12,77,56,95};
    int size=sizeof(array)/sizeof(array[0]);
    int min=array[0];

    for(int idx=0;idx<size;idx++)
    {
        if(array[idx]<min)
        {
            min=array[idx];
        }
    }
    cout<<"Minimum value = "<<min;
    return 0;
}