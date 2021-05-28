#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,i,key;

    cout<<"Enter the size of the array ";
    cin>>n;

    cout<<"\nEnter the elements of the array: ";
    int a[100];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int largest=INT32_MAX;
    int smallest=INT32_MIN;

    for(i=0;i<n;i++){
        largest = max(largest,a[i]);
        smallest = min(smallest,a[i]);  
    }
    cout<<"Largest "<<largest<<endl;
    cout<<"Smallest "<<smallest<<endl;
    return 0;  
}