#include <iostream>
using namespace std;
 
int main()
{
    //For Loop
    int n;
    cout<<"Enter Number = ";
    cin>>n;
    int product=0;
    for (int i = 1; i <= n; i++)
    {
        product=product*i;
    }
    cout << "Product of first "<<n<<" number is: "<<product<<endl;
    
    //while loop
    int m,j=1,sum=0;
    cout<<"Enter Number = ";
    cin>>m;
    while(j<=m)
    {
        sum=sum+j;
        j++;
    }
    cout << "Sum of first "<<m<<" number is: "<<sum<<endl;

     //Do-While Loop
    int k = 6;
    do
    {
        cout<<k;
        k++;
    }
    while(k<4);
    return 0;
}