#include<iostream>
using namespace std;

void reversearray(int arr[],int start, int end){ //rotate by one.
    while(start<end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void leftRotate(int arr[],int d,int n){
    if(d==0)
        return;
    //if roatating factor is greater than array length
    d = d%n;

    reversearray(arr,0,d-1);
    reversearray(arr,d,n-1);
    reversearray(arr,0,n-1);
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