/* write a c++ program to find the largest digit in anumber*/

#include <iostream>
using namespace std;
int main()
{
    int num,z,max=0;
    cout<<"Enter a number"<<endl;
    cin>>num;
    while(num!=0)
    {
        z=num%10;
        if (z>max)
        max=z;
        num=num/10;

    }
    cout<<"The largest digit is:"<<max<<endl;
    return 0;

}