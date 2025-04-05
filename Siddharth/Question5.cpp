/*Write C++ program to check if a number is perfect square using loops.*/

#include<iostream>
using namespace std;
int main(){
    int i,num;
    cout<<"Enter a Number:";
    cin>>num;
    for(i=0;i<num/2;i++){
        if(i*i==num){
            cout<<"Percfect square"<<endl;
            break;
        }
    }
    if(i*i!=num){
        cout<<"Not a percfect square"<<endl;
    }
    return 0;
}