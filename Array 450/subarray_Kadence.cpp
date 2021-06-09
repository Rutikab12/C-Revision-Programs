#include<iostream>
using namespace std;

int main(){
    int a[100];
    int i,n;
    int maxsum=0;
    int currsum=0;

    cout<<"ENter the size of the array:";
    cin>>n;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    //Kadanes algorithm for maximum subarray sum
    for(i=0;i<n;i++){
        currsum=currsum+a[i];
        if(currsum<0){
            currsum=0;
        }

        maxsum=max(currsum,maxsum);
    }

    cout<<"Maximum sum is: "<<maxsum;

    return 0;
}