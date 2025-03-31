/* Write a c++ prgram to print the pattern
sample output for n=3
1*2*3
4*5*6
7*8*9

sample output for n=4
1*2*3*4
5*6*7*8
9*10*11*12 */

#include <iostream>
using namespace std;
int main()
{
    int i,j,r,n;
    cout<<"Enter any number";
    cin>>n;
    r=1;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<n)
            cout<<r<<"*";
            else
            cout<<r;
            r++;
        }
        cout<<endl;
    }
    return 0;
}