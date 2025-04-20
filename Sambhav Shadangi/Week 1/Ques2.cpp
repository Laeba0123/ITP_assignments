/* Write a c++ program to input three sides of a triangle and check whether a triangle can be
 drawn from it or not ,if triangle can be drawn then check if it is an equilateral,isosceles or scalene 
 triangle */

 #include <iostream>
 using namespace std;
 int main()
 {
    float p,q,r;
    cout<< "Enter three sides of a triangle:" <<endl;
    cin>> p >> q >> r;
    if(p+q>r &&  q+r>p && p+r>q) 
    {
      if (p==q && q==r && r==p)
      cout<<"It is an equilateral triangle"<<endl;
      else if(p==q || q==r || r==p)
      cout<<"It is an isosceles triangle"<<endl;
      else
      cout<<"It is a scalene triangle"<<endl;
    }
    else
    cout<<"The entered sides cannot form a triangle"<<endl;
    return 0;
 }