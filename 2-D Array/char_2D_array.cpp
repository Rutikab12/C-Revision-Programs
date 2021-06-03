#include<iostream>
using namespace std;

int main(){
    //char a[][10]={{'a','b','\0'},{'d','e','f','\0'}};
    //char a[][]={"abc","def"};
    //cout<<a[0]<<endl;
    //cout<<a[1]<<endl;
    char c[100][100];
    //c[0][0]='A';
    //cout<<c[0][0]<<endl;
    int n;
    cin>>n; //number of strings
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(c[i],1000);
    }

    //print out all the arrays
    for(int i=0;i<n;i++){
        cout<<c[i]<<endl;
    }

    return 0;
}