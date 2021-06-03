#include<iostream>
using namespace std;

int main(){
    int a[10][10]={0};
    int m,n;
    cout<<"Enter the no of rows and coulmns: ";
    cin>>m>>n;

    int val=1;
    for(int row=0;row<=m-1;m++){
        for(int col=0;col<=n-1;col++){
            a[row][col]=val;
            val++;
            cout<<a[row][col]<<" ";
        }

        cout<<endl;
    }

}