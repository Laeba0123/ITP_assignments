/* write a program to check if a number is a perfect dsquare or not using loops*/

#include <iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for (i=0;i*i<=n;i++)
    {
        if (i*i==n)
        c++;

    }
    if(c==0)
    cout<<"The entered number is not a perfect square"<<endl;
    else 
    cout<<"The entered number is a perfect square"<<endl;
    return 0;

}