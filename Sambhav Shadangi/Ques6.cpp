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
    cout<<"The output is:"<<endl;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=i;k++)
            {
                cout<<j;
            }
        }
        cout<<endl;
    }
    return 0;
}