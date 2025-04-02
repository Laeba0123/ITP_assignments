#include<iostream>
using namespace std;
bool checktriangle(int a,int b,int c);
int main(){
    int a,b,c;
    cout<<"Enter Side 1:";
    cin>>a;
    cout<<"Enter Side 2:";
    cin>>b;
    cout<<"Enter Side 3:";
    cin>>c;
    if(checktriangle(a,b,c)){
        cout<<"Triangle can be drawn"<<endl;
        if(a==b && b==c){
            cout<<"Equilateral Triangle"<<endl;
        }
        else if(a==b || b==c || a==c){
            cout<<"Isosceles Triangle"<<endl;
        }
        else{
            cout<<"Scalene Triangle"<<endl;
        }
    }
    else{
        cout<<"Triangle can't be drawn"<<endl;
    }
    return 0;
}
bool checktriangle(int a,int b,int c){
    return a+b>c && a+c>b && b+c>a;
}