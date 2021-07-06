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

int getnth(node *head, int n){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        if(count==n)
            return (temp->data);
        count++;
        temp=temp->next;
    }

    assert(0);
}


int main()
{
    node* head = NULL;
 
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);
 
    cout << "Element at index 2 is "<< getnth(head, 2);
    return 0;
}