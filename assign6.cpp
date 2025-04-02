#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number:";
    cin>>num;
    for(int j=1;j<=num;j++){
        for(int k=1;k<=j;k++){
            cout<<"1";
        }
        for(int k=1;k<=j;k++){
            cout<<"2";
        }
        for(int k=1;k<=j;k++){
            cout<<"3";
        }
        cout<<endl;
    }
    return 0;
}