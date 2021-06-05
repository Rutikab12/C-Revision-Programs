#include<iostream>
using namespace std;

void print(int num)
{
    if(num == 0)
    {
        return;
    }
    
    print(num / 10);
    cout << num % 10;
    cout << ", ";
}


 int main(){
     int num1[100] ,num2[100];
     int n;
     cin>>n;

     for(int i=0;i<n;i++){
         cin>>num1[i];
     }

     int m;
     cin>>m;

     for(int j=0;j<m;j++){
         cin>>num2[j];
     } 

     int fnum=0;
     int snum=0;

     for(int i=0;i<n;i++){
         fnum=fnum*10+num1[i];
     }

     for(int i=0;i<m;i++){
         snum=snum*10+num2[i];
     }

     int sum =fnum+snum;

     print(sum);
     cout<<" END";

}