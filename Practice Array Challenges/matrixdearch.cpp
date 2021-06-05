#include<iostream>
using namespace std;

void matrixsearch(int **a,int m,int n, int key){
    for(int row=0;row<m;){
        for(int col=n-1;col>=0 and row<m;){
            if(a[row][col]==key){
                cout<<1;
                return ;
            }
            else if(a[row][col]>key){
                col--;
            }else{
                row++;
            }
        }
    }
    cout<<0;
    return;
}

int main(){
    int m,n;
    cin>>m>>n;
    int **a = new int*[m];
    for(int i=0;i<m;i++){
        a[i]=new int[n];
    }
    //int a[1000][1000];    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int key;
    cin>>key;
    matrixsearch(a,m,n,key);
}