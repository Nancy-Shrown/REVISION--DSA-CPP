#include<iostream>
using namespace std;
int main()
{
    int array[]={52,12,77,56,95};
    int size=sizeof(array)/sizeof(array[0]);
    int max=array[0];

    for(int idx=0;idx<size;idx++)
    {
        if(array[idx]>max)
        {
            max=array[idx];
        }
    }
    cout<<"Maximum value = "<<max;
    return 0;
}