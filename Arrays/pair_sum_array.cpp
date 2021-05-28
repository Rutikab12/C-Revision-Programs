#include<iostream>
using namespace std;

int main(){
    int a[]={1,3,5,7,10,11,12,13};
    int i=0;
    int sum=16;

    //two pointer approach
    int j = sizeof(a)/sizeof(int)-1;
    while(i<j){
        int currsum=a[i]+a[j]; //perform the sum
        if(currsum>sum){
            j--;
        }
        else if(currsum<sum){
            i++;
        }
        else if(currsum==sum){
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;
        }
    }
    return 0;
}