#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

//if want to compare basis on the length of the strings
bool compare(string a,string b){
    if(a.length()==b.length()){ //lexigraphical comapre
        return a<b;
    }
    return a.length()>b.length();
}

int main(){
    int n;
    string s[100]; //can use vector

    cout << "Enter no of strings : ";
    cin >> n;

    cin.get();

    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }
    sort(s, s + n,compare);
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
} 

