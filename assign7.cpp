#include<iostream>
using namespace std;
int main(){
    int x,num;
    cout<<"Enter a Number:";
    cin>>num;
    for(int j=1,x=1;j<=num;j++){
        for(int k=1;k<=num;k++,x++){
            cout<<x;
            if(k<num)
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}