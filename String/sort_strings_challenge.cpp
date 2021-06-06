#include<iostream>
#include<cstring>
using namespace std;

string extractStringatkey(string str,int key){
    //strtok
    char *s = strtok((char *)str.c_str()," "); //typecasting int to str
    while(key>1){
        s=strtok(NULL," ");
        key--;
    }
    return (string)s;
}

int main(){
    /*string s(" 10 20 30 40");
    int key;
    cin>>key;
    cout<<extractStringatkey(s,key);*/
    
    int n;
    cin>>n;
    cin.get();

    string a[100];
    for(int i=0;i<n;i++){
        getline(cin,a[i]);
    }
    int key;
    string reversal,ordering;

    //helper functiom
    //1.extract a token

    pair<string,string> strPair[100];
    for(int i=0;i<n;i++){
        strPair[i].first=a[i];
        strPair[i].first=extractStringatkey(a[i],key);
    }


    //next= sorting
    if(ordering=="numeric"){
        sort(strPair,strPair+n,numericComapre);
    }
    else{
        sort(strPair,)
    }
}