/* write a c++ program to input three sides of a triangle and check whether a triangle can be
 drawn from it or not ,if triangle can be drawn then check if it is an equilateral,isosceles or scalene 
 triangle */

 #include <iostream>
 using namespace std;
 int main()
 {
    float a,b,c;
    cout<< "Enter three sides of a triangle:" <<endl;
    cin>> a >> b >> c;
    if(a+b>c &&  b+c>a && a+c>b) //Essential condition for a triangle
    {
      if (a==b && b==c && c==a)
      cout<<"It is an Equilateral Triangle"<<endl;
      else if(a==b || b==c || c==a)
      cout<<"It is an Isosceles Triangle"<<endl;
      else
      cout<<"It is a Scalene Triangle"<<endl;
    }
    else
    cout<<"The entered sides cannot form a triangle"<<endl;
    return 0;
 }