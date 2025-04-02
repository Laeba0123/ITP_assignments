/* Write a c++ program to input a decimal number and convert it into binary and octal number systems
using loops*/

#include <iostream>
using namespace std;
int main()
{
    int i,num,bnum,j;
    cout<<"Enter a number"<<endl;
    cin>>num;
    bnum=num;
    int a[15],b[15];
    j=0;
    while(bnum!=0)
    {
        b[j]=bnum%2;
        bnum=bnum/2;
        j++;
    }
    cout<<"The entered number in binary form is:";
    for(i=j-1;i>=0;i--)
    {
        cout<<b[i];
    }
    cout<<endl;
    j=0;
    while(num!=0)
    {
        a[j]=num%8;
        num=num/8;
        j++;
    }
    cout<<"The entered number in octal number system is:";
    for(i=j-1;i>=0;i--)
    {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
    
}