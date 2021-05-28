#include<iostream>
using namespace std;

void selection_sort(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        //findout the smallest element index int eh unsorted part
        int min_index=i;
        for(j=i;j<=n-1;j++){
            if(a[j]<a[min_index]){
                min_index=j;
            }
        }
        //after this loop we cab do swap finally
        swap(a[i],a[min_index]);
    }
 
}

int main(){
    int n,key,i;
    int a[200];
    
    cout<<"Enter size of the array: ";
    cin>>n;

    cout<<"Enter elements of the array: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    selection_sort(a,n);
    for(i=0;i<n;i++){
        cout<<a[i]<<",";
    }

    return 0;
}