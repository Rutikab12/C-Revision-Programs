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

int printNthFromLast(node *head, int n){
    int len = 0, i;
    node* temp = head;
 
    // count the number of nodes in Linked List
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
 
    // check if value of n is not
    // more than length of the linked list
    if (n>len)
        return 0;
 
    temp = head;
 
    // get the (len-n+1)th node from the beginning
    for (i = 1; i < len - n + 1; i++)
        temp = temp->next;
 
    cout << temp->data;
    
}


int main()
{
    node* head = NULL;
 
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);
 
    printNthFromLast(head, 4);
    return 0;
}