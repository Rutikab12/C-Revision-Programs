#include<iostream>
#include<string>
using namespace std;

int main(){
    string s0;
    string s1("Hello World");

    string s2= "JHEllo Wordl";
    string s3(s2);

    string s4 =s3;

    char a[]={'a','b','c','\0'};
    string s5(a);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    if(s0.empty()){
        cout<<"s0 is an empty string"<<endl;
    }

    //append
    s0.append("I love c++");
        cout<<s0<<endl;
    
    s0 += " and Python";
    cout<<s0<<endl;

    //remove
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;

    //compare two strings
    s0="mango";
    s1="apple";
    cout<<s1.compare(s0)<<endl; //gove output as 0, or >0,<0

    //overloaded operator operators
    if(s0<s1){
        cout<<"Mango is lexi greater than apple";
    }
    
    cout<<s0[0]<<endl;

    //find substring
    string s = " I want to have apple jiuce";
    int idx = s.find("apple");
    cout<<idx<<endl;

    //remove a word from string
    string word="apple";
    int len = word.length();
    s.erase(idx,len+1);
    cout<<s<<endl;

    //iterate over all char in the string
    for(int i=0;i<s1.length();i++){
        cout<<s1[i]<<":";
    }
    cout<<endl;
    //also iterators can be used
    //we can use string::iterator instead of auto
    for(auto it=s1.begin();it!=s1.end();it++){
        cout<<(*it)<<",";
    }
    cout<<endl;
    //for each loop
    //here char instead of auto
    for(auto c:s1){
        cout<<c<<".";
    }
}
