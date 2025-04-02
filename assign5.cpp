#include<iostream>
using namespace std;
int main(){
    int i,num;
    cout<<"Enter a Number:";
    cin>>num;
    for(i=0;i<num/2;i++){
        if(i*i==num){
            cout<<"It's an Percfect square"<<endl;
            break;
        }
    }
    if(i*i!=num){
        cout<<"It's not an Percfect square"<<endl;
    }
    return 0;
}