#include<bits/stdc++.h>
#include<vector>
using namespace std;
 class node{
     public:
        int data;
        node* next;
        node(int d){
            data=d;
        }
 };

 bool ispalindrome(node* head){
     node* temp=head;
     //declare a stck
     stack <int> S;
    while(temp!=NULL){
        S.push(temp->data);
        temp=temp->next;
    }

    //iterate again to check the palidrome
    while(head!=NULL){
        int i=S.top();
        S.pop();
        if(head->data!=i){
            return false;
        }
        head=head->next;
    }
    return true;

 }

 int main(){
     node one=node(1);
     node two=node(1);
     node three=node(2);
     node four=node(1);
     node five=node(1);

     //intialize next pointer
     five.next=NULL;
     one.next=&two;
     two.next=&three;
     three.next=&four;
     four.next=&five;

     node* temp=&one;
     int result = ispalindrome(&one);
     if(result==1)
         cout<<"It is palindrome";
     else
        cout<<"It is not palindrome";
        
    return 0;

 }