#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //call the sort function
    sort(a,a+n);

    int l=0;
    int r=n-1;
    int target;
    cin>>target;
    while(l<r){
        if(a[l]+a[r]==target){
            cout<<a[l]<<" and "<<a[r]<<endl;
            l++;
            r--;
        }
        else if(a[l]+a[r]<target){
            l++;
        }
        else{
            r--;
        }
    }

    return 0;
}