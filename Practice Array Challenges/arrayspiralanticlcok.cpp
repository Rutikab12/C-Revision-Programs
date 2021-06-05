#include<iostream>
using namespace std;

void input2D(int a[10][10],int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
}

void print(int a[10][10], int m, int n){
    int left=0;
    int right=n-1;
    int top=0;
    int bottom = m-1;

    while(left<=right || top<=bottom){
        if(left<=right){
            //print top to bottom right elements
            for(int i=top;i<=bottom;++i){
                cout<<a[i][left]<<" ";
            }
            left++;
        }

        //print left to right top elements
        if(top<=bottom){
            for(int i=left;i<=right;++i){
                cout<<a[bottom][i]<<" ";
            }
            bottom--;
        }

        //print bottom to top : left elements
        if(left<=right){
            for(int row = bottom; row >= top; --row){
                cout<<a[row][right]<<" ";
            }
            right--;
        }

        //print right to left : bottom elements
        if(top<=bottom){
            for(int col=right;col>=left;--col){
                cout<<a[top][col]<<" ";
            }
            ++top;
        }
    }
    cout<<" END";
}


int main(){
    int a[10][10];
    int m,n;
    cin>>m>>n;
    input2D(a,m,n);

    print(a,m,n);
}