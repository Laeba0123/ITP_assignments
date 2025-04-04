//Write a C++ program to find the largest digit in a number.//
#include<iostream>
using namespace std;
int main() {
    int n,a,max=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        if(a>max)
        max=a;
        n=n/10;
    }
    cout<<"the largest digit in the number is:"<<max<<endl;
    return 0
    ;
}