#include<iostream>
using namespace std;

int main(){
    int b[]={1,2,3}; //defau;t behaviour is showing address of the memory location
    cout<<b<<endl;

    char a[]={'a','v','c','d','\0'}; //special behaviour of showing the characters of the array
    cout<<a<<endl;

    //input and output
    

    char s1[]={'h','e','l','l','o'}; //5 bytes as no null character
    char s2[]="hello";  // 6 bytes as null character get add automaticaly

    cout<<s1<<" "<<sizeof(s1)<<endl;
    cout<<s2<<" "<<sizeof(s2)<<endl;

    return 0;
}