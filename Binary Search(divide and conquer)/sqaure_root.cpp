#include<iostream>
#include<algorithm>
using namespace std;
//log(n)
float square(int n,int p){
    int s=0;
    int e=n;
    float ans=-1;

    while(s<=e){
        int mid=(s+e)/2;
        if(mid*mid==n){
            return mid;
        }

        if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }

    //brute force
    
    /*float inc=0.1;
    for(int times=1;times<=p;times++){
        while(ans*ans<=n){
            ans=ans+inc;
        }

        //overshot the value
        ans=ans-inc;
        inc=inc/10;
    }*/
    
    return ans;
}

int main(){
    //sqaure root using binray search
    //monotonic search space
    int n;
    cin>>n;

    cout<<square(n,3)<<endl;
    return 0;
}