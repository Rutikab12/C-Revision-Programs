#include<iostream>
#include<algorithm>
using namespace std;

//define comparator function
bool compare(int a,int b){
    cout<<"comapring "<<a<<" and "<<b<<endl;
    return a>b;  //can print in both orders ascending and descending 
} 

int main(){
    int a[100];
    int i,n;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //sort an array using sort() function
    sort(a,a+n,compare);

    for(i=0;i<n;i++){
        cout<<a[i]<<",";
    }

    return 0;
}