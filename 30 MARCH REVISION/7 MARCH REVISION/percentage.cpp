#include<iostream>
using namespace std;

int main()
{
    int s1,s2,s3,s4,s5,total;
    cout<<"Enter marks of subjects: ";
    cin>>s1>> s2>> s3>> s4>> s5;
    total=s1+s2+s3+s4+s5;

    double percentage;
    percentage = (total/5)* 100;
    cout<<"Percentage = "<<percentage<<"%";


    return 0;
}