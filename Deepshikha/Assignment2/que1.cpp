/*1. Take two array as input, merge them and print it in reverse order
using loop*/
# include <iostream>
using namespace std;

int main(){
    int i,n1,n2;
    int a[10], b[10], c[20];
    cout<<"Enter the size of 1st array(max.10): "<<endl;//array created
    cin>>n1;
    cout<<"Enter the elements:"<<endl;
    for(i=0; i<n1; i++){
        cin>>a[i];
    }
    cout<<"Enter the size of 2nd array(max.10): "<<endl;
    cin>>n2;
    cout<<"Enter the elements:"<<endl;
    for(i=0; i<n2; i++){
        cin>>b[i];
    }
    
    int mersz=n1+n2;   //merge 2 arrays
    for(i=0; i<n1; i++){
        c[i]=a[i];
    }
    for(i=0; i<n2; i++){
        c[n1+i]=b[i];
    }
    cout<<"\nMerged array:\n";
    for(i=0; i<mersz; i++){
        cout<<c[i]<< " ";
    }

    cout<<"\nMerged array in reverse order:\n";
    for(i=mersz - 1; i>=0; i--){
        cout<<c[i]<< " ";
    }

    return 0;
}


//OUTPUT
/*Enter the size of 1st array(max.10): 
4
Enter the elements:
1 2 3 4
Enter the size of 2nd array(max.10): 
3
Enter the elements:
5 6 7

Merged array:
1 2 3 4 5 6 7 
Merged array in reverse order:
7 6 5 4 3 2 1 */