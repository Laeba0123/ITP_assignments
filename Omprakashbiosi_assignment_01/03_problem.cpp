#include <iostream>
using namespace std;
/*3. Write a C++ program to find the largest digit in a number*/
int main()
{
    int n, d1, d2, max = 0;
    cout << "Enter the number : \n";
    cin >> n;
    while (n != 0)
    {
        d1 = n % 10;
        n /= 10;
        if (n / 10 != 0)
        {
            d2 = n % 10;
        }
        else
        {
            d2 = max;
        }

        if (d1 > d2)
        {
            max = d1;
        }
        else
        {
            max = d2;
        }
    }
    cout << "Maximu digit =" << max;
}