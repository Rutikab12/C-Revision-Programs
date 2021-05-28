#include<iostream>
using namespace std;

void bubble_sort(int a[],int n){
    //N-1 large elements to the ends
    for(int itr=1;itr<=n-1;itr++){
        //pairwise iteration in the unsorted array
        for(int j=0;j<=(n-itr-1);j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
    int i,key,n;
    int a[100];

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    bubble_sort(a,n);
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<",";
    }
    
    return 0;
}