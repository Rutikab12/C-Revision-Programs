#include<iostream>
using namespace std;

void input(int a[],int n){
    if(n==1){
        cin>>a[0];
    }
    else{
        input(a,n-1);
        cin>>a[n-1];
    }
}

bool check(int a[],int n,int size){
    if(n==size/2)
        return true;
    
    if(a[n-1]!=a[size-n])
        return false;
    
    check(a,n+1,size);
}

int main(){
    int n, a[100];
    cin>>n;
    input(a,n);
    int x = check(a,1,n);
    if(x==n)
        cout<<"TRUE";
    else
        cout<<"FALSE";
}