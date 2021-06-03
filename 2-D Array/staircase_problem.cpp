#include<iostream>
using namespace std;

//a recursive function used by countways
int countwaysutil(int n,int m){
    int res[n];
    res[0]=1;
    res[1]=1;

    for(int i=2;i<n;i++){
        res[i]=0;

        for(int j=1;j<=m && j<=i;j++)
            res[i]+=res[i-j]; 
    }
    return res[n-1];
}

//a function which returns number of ways to reach nth stair
int countways(int s,int m){
    return countwaysutil(s+1,m);
}


int main(){
    int  s=8,m=2;

    cout<<"Number of ways = "<<countways(s,m);

    return 0;
}