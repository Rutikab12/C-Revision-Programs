#include<iostream>
#include<algorithm>
using namespace std;

bool canplacecows(int stalls[],int n,int c,int min_step){
    int last_cow=stalls[0];
    int cnt=1;
    //place the first cow in the first stall
    for(int i=0;i<n;i++){
        if(stalls[i]-last_cow >= min_step){
            last_cow=stalls[i];
            cnt++;
            if(cnt==c){
                return true;
            }
        }
    }

    return false;
}

int main(){
    int stalls[]={1,2,3,4,8,9};
    int n =5;

    int cows=3;

    //binary search algorithm
    int s=0;
    int e=stalls[n-1]-stalls[0];

    int ans=0;
    while(s<=e){
        int mid=(s+e)/2;
        bool cow = canplacecows(stalls,n,cows,mid);
        if(cow){
            ans=mid;
            s=mid+1;        
        }else{
            e=mid-1;
        }
    }

    cout<<ans;
    return 0;
}