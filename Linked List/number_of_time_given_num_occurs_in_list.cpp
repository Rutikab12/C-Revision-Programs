#include<bits/stdc++.h>
#include<assert.h>
using namespace std;
//O(n)
class node{
    public:
        int data;
        node* next;
};

void push(node** head, int data){
    node* newnode=new node();
    newnode->data=data;
    newnode->next=(*head);
    (*head)=newnode;
}

int count(node* head,int search){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        if(temp->data==search)
            count++;
        temp=temp->next;
    }
    return count;
}


int main()
{
    node* head = NULL;
 
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);
 
    cout << "Element 1 is "<< count(head, 1)<<" times";
    return 0;
}