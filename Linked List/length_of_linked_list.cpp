#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
};

void push(node** head, int data){
    node* newnode = new node();
    newnode->data=data;
    newnode->next=(*head);
    (*head)=newnode;
}

int getcount(node* head)
{
    int count = 0; // Initialize count
    node* current = head; // Initialize current
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
 

void display(node* head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node *head=NULL;
    push(&head,1);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    cout<<"Length of list: "<<getcount(head)<<" ";
    display(head);
}