#include<iostream>
using namespace std;

int binary_serach(int a[],int n, int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}


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

    cout<<binary_serach(a,n,key);

    return 0;
}