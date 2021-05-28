#include<iostream>
using namespace std;

void leftRotatebyone(int arr[],int n){ //rotate by one.
    int temp = arr[0],i;
    for(i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

void leftRotate(int arr[],int d,int n){
    for(int i=0;i<d;i++)
        leftRotatebyone(arr,n);
}

void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    leftRotate(arr,2,n);
    print(arr,n);

    return 0;
}