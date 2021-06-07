#include<iostream>
using namespace std;

void getstring(string s){
    //print first chracter as it is.
    cout<<s[0];

    //Traverse the rest of the charcters one by one
    int i=1;
    while(i<s.length()){
        //ifIf current character is uppercase
        // print space followed by the
        // current character in lowercase
        if(s[i]>='A' && s[i]<='Z')
            cout<<" "<<(char)tolower(s[i]);
        else
            cout<<s[i];
        i++;
    }

}

int main(){
    string s = "IAmACompetitiveProgrammer";
    cout<<s<<endl;

    getstring(s);

    return 0;
}