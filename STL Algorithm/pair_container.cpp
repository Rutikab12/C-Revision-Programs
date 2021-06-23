#include<bits/stdc++.h>
using namespace std;

//helps to bind to entities as a single entity
int main(){
    pair<int,char> p;
    p.first=10;
    p.second ='B';

    //another way
    pair<int,char> p2(p);

    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    //third way
    pair<int,string> p3=make_pair(100,"Audi");
    cout<<p3.first<<" "<<p3.second<<endl;

    //take input
    int a,b;
    cin>>a>>b;


    return 0;
}