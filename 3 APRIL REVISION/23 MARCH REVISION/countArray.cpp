#include <iostream>
using namespace std;
int main() 
{
  int arr[]={3,4,69,45,1,9,56};
  int n=sizeof(arr)/sizeof(arr[0]);
  
  int x;
  cout<<"Enter value of x :";
  cin>>x;
  
 int count=0;
  
  for(int i=0;i<n;i++)
  {  
    if(x<arr[i])
    {
      count++;
    }  
  }
  cout<<"Numbers greater than x :"<<count;
  return 0;
}