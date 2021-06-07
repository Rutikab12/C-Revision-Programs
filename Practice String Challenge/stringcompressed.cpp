#include<iostream>
using namespace std;

string compress(string s){
    if(s.size()==0){
        return "";
    }
    char ch=s[0];
    int i=1;
    while(i<s.size() and s[i]==ch){
        i++;
    }
    string ros = s.substr(i);
    ros = compress(ros);

    string charcount = to_string(i);
    return ch + charcount + ros;
}

int main(){
    string s;
    cin>>s;

    cout<<compress(s)<<endl;

    return 0;
}