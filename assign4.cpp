#include<iostream>
#include<cmath>
using namespace std;
int binary(int a){
    int i=0,temp=0,b=1;
    while(a>0){
        temp+=b*(a%2);
        b*=10;
        i++;
        a/=2;
    }
    return temp;
}
int octal(int a){
    int i=0,temp=0,b=1;
    while(a>0){
        temp+=b*(a%8);
        b*=10;
        i++;
        a/=8;
    }
    return temp;
}
int main(){
    int dec;
    cout<<"Enter a decimal number:";
    cin>>dec;
    cout<<"Binary="<<binary(dec)<<endl;
    cout<<"Octal="<<octal(dec)<<endl;
    return 0;
}