#include<iostream>
using namespace std;

int main(){
    int n,key,i;
    cout<<"Enter size of array ";
    cin>>n;

    cout<<"\nEnter elements of the array: ";
    int a[100];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter number to be search ";
    cin>>key;

    //finding out the index of that element by traversing the array
    for(i=0;i<=n-1;i++){
        if(a[i]==key){
            cout<<key<<" found at "<<i<<" index";
            break;
        }
    }
    if(i==n){
        cout<<key<<" not present in the array ";
    }

    return 0;
}