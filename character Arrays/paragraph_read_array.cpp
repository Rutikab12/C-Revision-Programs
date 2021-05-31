#include<iostream>
using namespace std;


void readline(char a[],int maxLen,char delim='\n'){
    int i=0;
    char ch=cin.get();
    while(ch!= delim){ //can use '\n' also.
        a[i]=ch;
        i++;
        if(i==(maxLen-1)){
            break;
        }
        ch=cin.get();
    }
    //once out of the loop
    a[i]='\0';
    return;
}
//cin.get() reads a single character at time.
//put a loop to read characters till you get a new line '\n
int main(){
    char a[1000];
    //c++ provides getline() instead of writing the above function
    cin.getline(a,1000);
    //readline(a,1000); //can counter special character $ to stop
    //cin>>a;
    cout<<a<<endl; //only prints the first word.
}