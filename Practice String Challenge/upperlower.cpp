/*
transform : Performs a transformation on given array/string.
toupper(int c) : Returns upper case version of character c. 
If c is already in uppercase, return c itself.
tolower(int c) : Returns lower case version of character c. 
If c is already in lowercase, return c itself.

--------------------------------
For uppercase conversion        |
Input : s = "String"            |
Output : s = "STRING"           |
                                |
For lowercase conversion        |
Input : s = "String"            |
Output : s = "string"           |
--------------------------------
*/

#include <iostream>
#include <cstring>
 
 
using namespace std;
 
int main()
{
    char arr[] = "Engineering Discipline.";
 
    cout << "Original String:\n"<< arr<< endl;
    cout<<"String in UPPERCASE:\n";
    for (int x=0; x<strlen(arr); x++)
        putchar(toupper(arr[x]));

    cout<<endl;
    
    char mat[] = "Engineering Discipline.";
 
    cout << "Original String:\n"<< mat<< endl;
    cout<<"String in lowercase:\n";
    for (int x=0; x<strlen(mat); x++)
        putchar(tolower(mat[x]));
     
     
    return 0;
}