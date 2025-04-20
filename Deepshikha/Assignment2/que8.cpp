/* Find the sum of digits of  number using recursion*/

#include <iostream>
using namespace std;
int digit(int n){
    if(n<10)
    return n;

    return (n%10)+ digit(n/10);
}
int main(){
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    int sum =digit(num);
    cout<<"Sum of digits: "<<sum<<endl;
    return 0;
} 

//OUTPUT

/*Enter a number:
264
Sum of digits: 12        */