#include <iostream>
using namespace std;
int main()
{
    int  n,x;
    cout << "Enter any number" << endl;
    cin >> n;
    x = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int y = 1; y <= 2 * x - 2; y++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        x = x - 1;
        cout << endl;
    }
    return 0;
}
