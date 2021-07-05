#include<bits/stdc++.h>
using namespace std;

void count_sort(int arr[],int n){
    int k =arr[0];
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);  //gives max element
    }
    int count[10]={0}; //take new count array
    for(int i=0;i<n;i++){
        count[arr[i]]++;   //this will count the element of the original array
    }

    for(int i=0;i<=k;i++){
        count[i] += count[i-1];  //add one to the count of every element in count array
    }

    int output[n]; //take one empty output array 
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];   //decrement one in count of every element and add the element to output array
    }

    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}

int main(){
    int arr[]={1,3,2,3,4,1,6,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    count_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}