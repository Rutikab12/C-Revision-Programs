#include<iostream>
using namespace std;

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

void middle(node *head){
        node *slow_ptr = head;
        node *fast_ptr = head;
  
        if (head!=NULL)
        {
            while (fast_ptr != NULL && fast_ptr->next != NULL)
            {
                fast_ptr = fast_ptr->next->next;
                slow_ptr = slow_ptr->next;
            }
            cout << "The middle element is [" << slow_ptr->data << "]" << endl;
        }
}

void print(node *head){
    while(head!=NULL){
        cout<<head->data<<"";
        head=head->next;
    }
    cout<<"\n";
}
int main(){
    node* head = NULL;
    int i;
    for (i = 5; i > 0; i--)
        push(&head, i);
 
    cout << " list before: ";
    print(head);
 
    middle(head);
 
    cout << " list After: ";
    print(head);
}