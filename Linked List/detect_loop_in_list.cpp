#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        int flag;
};

void push(node** head,int data){
    node* newnode=new node();
    newnode->data=data;
    newnode->next=(*head);
    (*head)=newnode;
}

bool detectloop(node*head){
    while(head!=NULL){
        if(head->flag==1)
            return true;
        head->flag=1;
        head=head->next;
    }
    return false;
}

int main(){
    node* head=NULL;
    push(&head,3);
    push(&head,2);
    push(&head,1);
    push(&head,5);
    push(&head,6);
    
    head->next->next->next->next=head;
    if(detectloop(head))
        cout<<"There is a loop present";
    else
        cout<<"No loop present";
    
    return 0;

}