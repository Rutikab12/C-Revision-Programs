#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,10,11,9,100};
    int n =sizeof(arr)/sizeof(int);

    int key;
    cin>>key;
    auto it=find(arr,arr+n,key);
    //cout<<it<<endl;  //gives address
    int index=it-arr;
    //cout<<index<<endl;  //gives index
    if(index==n){
        cout<<key<<" not present";
    }
    else{
        cout<<" present at the index";
    }
}