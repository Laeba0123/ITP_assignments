#include<iostream>
using namespace std;
int largest(int a);
int main(){
    int num;
    cout<<"Enter a Number:";
    cin>>num;
    cout<<"The Largest Digit is "<<largest(num)<<endl;
    return 0;
}
int largest(int a){
    int temp=0;
    while(a>0){
        if(a%10 > temp)
            temp=a%10;
        a=a/10;
    }
    return temp;
}