/* Find the nth Fibonacci number using recursion*/

#include <iostream>
using namespace std;
int fib(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return(fib(n-1)+fib(n-2));
}
int main(){
    int i,num;
    cout<<"Enter the term:"<<endl;
    cin>>num;
    cout<<"The Nth term is:"<<fib(num)<<endl;
    return 0;
}

//OUTPUT
/*Enter the term:
3
The Nth term is:2*/