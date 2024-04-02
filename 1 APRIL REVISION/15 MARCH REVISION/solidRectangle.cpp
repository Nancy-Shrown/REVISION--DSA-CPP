/*
Print the Solid Rectangle pattern 
*****
*****
*****
*****
*/
#include<iostream>
using namespace std;
int main;
{
    int row,column,i,j;
    cout<<"enter number of rows";
    cin>>row;
    cout<<"enter number of columns";
    cin>>column;
    for(i=1;i<row;i++)
    {
        for(j=1;j<column;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
