#include<iostream>
#include<algorithm>
using namespace std;
//An array contains both positive and negative numbers in random order. 
//Rearrange the array elements
//all negative numbers appear before all positive numbers.
//approach 1 using partition algo of quicksort

int main(){      //O(n)
    int pivot=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int i=-1;
    for(int j=0;j<n;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        }

    return 0;
}