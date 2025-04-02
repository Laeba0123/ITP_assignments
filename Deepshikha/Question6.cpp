/* Write a c++ program to print the pattern 
sample output for n=3
123
112233
111222333

sample output for n=2
12
1122*/

#include <iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter any number"<<endl;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        for(k=1;k<=n;k++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<k;
            }
        }
        cout<<endl;
    }
    return 0;
}