/*

Approach: The key to solving this problem lies in the ASCII value of a character. 
It is the simplest way to find out about a character. 
This problem is solved with the help of the following detail: 
 

Capital letter Alphabets (A-Z) lie in the range 65-91 of the ASCII value
Small letter Alphabets (a-z) lie in the range 97-122 of the ASCII value
Any other ASCII value is a non-alphabetic character.

*/

#include<iostream>
#include<cstring>
using namespace std;

void check(char ch)
{
 
    if (ch >= 'A' && ch <= 'Z')
        cout<< ch << " is an UpperCase character\n";
 
    else if (ch >= 'a' && ch <= 'z')
    cout<< ch << " is an LowerCase character\n";
             
 
    else
        cout<< ch << " is not an aplhabetic character\n";
             
}

int main()
{
    char ch;
 
    // Get the character
    ch = 'A';
 
    // Check the character
    check(ch);
 
    // Get the character
    ch = 'a';
 
    // Check the character
    check(ch);
 
    // Get the character
    ch = '0';
 
    // Check the character
    check(ch);
 
    return 0;
}