#include<iostream>
using namespace std;

int main(){
    int a[100];
    int i,j,k,n;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"ENter the elements of the array: ";
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //generate all sub-arrays
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){

            //which will generate subarray and print it.
            for(k=i;k<=j;k++){
                cout<<a[k]<<",";
            }
            cout<<endl;
        }
    }
    return 0;
    
}