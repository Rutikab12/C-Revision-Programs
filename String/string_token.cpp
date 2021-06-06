#include<iostream>
#include<cstring>
using namespace std;

//char *strtok(char *s,char *deliminator)
//returns a token on each subsequent call
//on the first call function should be passed with string argukent for 's'
//on subbsequent calls we should pass the string argument as null


int main(){
    char s[100]="Today is a rainy day";

    char *ptr = strtok(s," "); 
    cout<<ptr<<endl; // space is the deliminator here 
    //ptr = strtok(s," ");  
    //passing the null in next call gives next word
    while(ptr!=NULL){
        ptr = strtok(NULL," ");
        cout<<ptr<<endl;
    }
}