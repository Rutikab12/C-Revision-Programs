#include<iostream>
#include<cstring>
using namespace std;

//again two pointer approach
bool isPalindrome(char a[]){
    int i=0;
    int j=strlen(a)-1;

    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char a[1000];
    cout<<"Enter the string "<<endl;;
    cin.getline(a,1000);

    if(isPalindrome(a)){
        cout<<"Palindrome string";
    }
    else{
        cout<<"Not a Palindrome";
    }

    return 0;
}