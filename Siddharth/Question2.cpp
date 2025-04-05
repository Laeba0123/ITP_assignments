/* write a c++ program to input three sides of a triangle and check whether a triangle can be
 drawn from it or not ,if triangle can be drawn then check if it is an equilateral,isosceles or scalene 
 triangle */

 #include <iostream>
 using namespace std;
 int main(){
    float i,b,c;
    cout<< "Enter three sides:" <<endl;
    cin>> i >> b >> c;
    if(i+b>c &&  b+c>i && i+c>b){
      if (i==b && b==c && c==i)
      cout<<"Equilateral Triangle"<<endl;
      else if(i==b || b==c || c==i)
      cout<<"Isosceles Triangle"<<endl;
      else
      cout<<"Scalene Triangle"<<endl;
    }
    else
    cout<<"Cannot form a triangle"<<endl;
    return 0;
 }