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
    int i,j,k,n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    k=1;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<n)
            cout<<k<<"*";
            else
            cout<<k;
            k++;
        }
        cout<<endl;
    }
    return 0;
}