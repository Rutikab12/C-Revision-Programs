#include<iostream>
using namespace std;

void insertion_sort(int a[],int n){
    for(int i=0;i<=n-1;i++){
        int e = a[i];   //first element ex.-->6
        //place the current element at right position in the sorted part
        int j =i-1;   //elements from second onwards
        while(j>=0 and a[j]>e){  //ex. if j-->9 and yes 9>6
            a[j+1]=a[j];     // e = 9
            j = j-1;   //pointer get decresed.
        }
        a[j+1]=e;   // for the elements when all gets compared
    }
}

int main(){
    int i,n;
    int a[100];

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    insertion_sort(a,n);
    for(i=0;i<n;i++){
        cout<<a[i]<<",";
    }

    return 0;
}