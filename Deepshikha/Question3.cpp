/* write a c++ program to find the largest digit in anumber*/

#include <iostream>
using namespace std;
int main()
{
    int n,x,max=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(n!=0)
    {
        x=n%10;
        if (x>max)
        max=x;
        n=n/10;

    }
    cout<<"The largest digit in the number is:"<<max<<endl;
    return 0;

}
