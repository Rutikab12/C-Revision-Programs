#include<iostream>
#include<cstring>
using namespace std;


int main(){
    int n,i;
    cout<<"Enter no of string: ";
    cin>>n;
    char a[1000];
    char largest[1000];

    int len=0;
    int largest_len=0;

    cout<<"Enter the strings "<<endl;
    cin.get();
    for(i=0;i<n;i++){  //takes first string as null \n and give chance to input only twos trings
        cin.getline(a,1000);
        //cout<<a<<endl;
        len =strlen(a);
        if(len>largest_len){
            largest_len=len;
            strcpy(largest,a);
        }
    }

    cout<<largest<<" and "<<largest_len<<endl;
    return 0;
}