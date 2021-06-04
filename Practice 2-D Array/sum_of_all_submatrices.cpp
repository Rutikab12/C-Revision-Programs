#include<iostream>
using namespace std;

int sumofsubmatrix(int **arr,int m,int n){
    int sum=0;
    for(int i=0;i<n;i++){ 
        for(int j=0;j<m;j++){
            int tl = (i+1)*(j+1); //gives top-left area
            int br = (n-i)*(m-j);  //gives bottom right area
            sum += (tl * br)*arr[i][j];  //cal the sum
        }
    }
    return sum;
}

int main(int argc,char const *argv[]){
    int m,n;
    cin>>m>>n;

    int **arr= new int*[n];   //O(n^2)
    for(int i=0;i<n;i++){
        arr[i]= new int[m];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<sumofsubmatrix(arr,n,m)<<endl;

    return 0;
}