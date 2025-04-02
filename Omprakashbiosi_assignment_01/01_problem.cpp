#include<iostream>
using namespace std;

int main(){
    /*1. Write a program to print the numbers from 1 to 100, but           
replace multiples of 3 with "Fizz" and multiples of 5 with "Buzz" and if divisible
 by both print “FizzBuzz”.*/
    int i;
    for (i = 1; i <= 100; i++)
    {
        if(i%3 == 0 && i%5 ==0)
        {
            cout<<" FizzBuzz";
        }
        else if (i%3 == 0)
        {
            cout<<" Fizz";
        }
        else if(i%5 ==0){
            cout<<" Buzz";
        }
        else
        {
            cout<<" "<<i;
        }
        
        
        
    }
    
}
