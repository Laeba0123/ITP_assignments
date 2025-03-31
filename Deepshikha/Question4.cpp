/* Write a c++ program to input a decimal number and convert it into binary and octal number systems
using loops*/


#include <iostream>
using namespace std;
int main()
{
    int i,n,num2,j;
    cout<<"Enter a number"<<endl;
    cin>>n;
    num2=n;
    int a[15],b[15];
    j=0;
    while(n!=0)
    {
        a[j]=n%8;
        n=n/8;
        j++;
    }
    cout<<"The entered number in octal number system is:";
    for(i=j-1;i>=0;i--)
    {
        cout<<a[i];
    }
    cout<<endl;
    j=0;
    while(num2!=0)
    {
        b[j]=num2%2;
        num2=num2/2;
        j++;
    }
    cout<<"The entered number in binary form is:";
    for(i=j-1;i>=0;i--)
    {
        cout<<b[i];
    }
    return 0;
    
}


