/* write a c++ program to find the largest digit in anumber*/

#include <iostream>
using namespace std;
int main(){
    int i,x,max=0;
    cout<<"Enter a number"<<endl;
    cin>>i;
    while(i!=0){
        x=i%10;
        if (x>max)
        max=x;
        i=i/10;
    }
    cout<<"The largest digit in the number is:"<<max<<endl;
    return 0;
}