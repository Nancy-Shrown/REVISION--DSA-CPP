#include<iostream>
using namespace std;
int main()
{
    int marks[5] = {87,98,54,28,44};
    int rollNo = marks[0];
    for (int idx = 0; idx < 5; idx++)
    {
        if (marks[idx] < 35)
        {    
            rollNo = idx; 
        } 
        else
        continue;
    }  
    cout<<"Roll number of student having marks less than 35 is :"<<rollNo<<endl;    
    return 0;
}