#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int arr[]={1,10,10,10,11,9,100};
    int n =sizeof(arr)/sizeof(int);

    /*int key;
    cin>>key;

    bool present = binary_search(arr,arr+n,key);
    if(present){
        cout<<"present ";
    }
    else{
        cout<<" not present";
    }*/


    //to get index of element
    //lower_bound() and upper_bound()

    auto lb = lower_bound(arr,arr+n,10); //addresss of key
    cout<<lb-arr<<endl;

    if((lb-arr)==n){
        cout<<"Element is not present at "<<endl;
    }
    //upper bound
    auto ub = upper_bound(arr,arr+n,10);
    cout<<ub-arr<<endl;

    cout<<"occurence frequency of 10 is  "<<(ub-lb)<<endl;
    return 0;
}