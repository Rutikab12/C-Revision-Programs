#include<iostream>
using namespace std;
//works on sorete array

int main(){
    int m,n,i,j;

    cout<<"Enter the no of rows and columns : "<<endl;
    cin>>m>>n;

    int a[100][100];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }


    cout<<"Enter the no to be searched: "<<endl;
    int x;
    cin>>x;

    i=0;
    j=n-1;
    int pass=0;
    while(i<m&&j>=0){
        if(a[i][j]==x){
            pass=1;
            break;
        }
        else if(x<a[i][j]){
            j--;
        }
        else{
            i++;
        }
    }

if(pass==1){
        cout<<"Number found at row = "<<i+1<<" Columns = "<<j+1<<endl;
        return 0;
    }
}


/*
void stairCaseSearch(vector<vector<int>> arr, int n, int el) {
    int i=0, j=n-1;
    while(i<n && j>=0) {
        if(el==arr[i][j]) {
            cout<<"Found at row = "<<i+1<<" and column = "<<j+1;
            return ;
        } else if(el<arr[i][j])
            j--;
        else if(el>arr[i][j])
            i++;
    }
    cout<<"Not found";
    return;
}


int main() {
    int n, el;
    cin>>n>>el;
	vector<vector<int>> arr(n, vector<int> (n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }
    stairCaseSearch(arr,n,el);
	return 0;
}*/
