#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
};

void push(node** head, int data){   //inserting the data in the linked list
    node* newnode = new node();
    newnode->data=data;
    newnode->next=(*head);
    (*head)=newnode;
}

int getcount(node* head)   //counting the number of elements in the linked list
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
 
bool search(node* head,int x){   //searching of element in linked list
    node *current = head;
    while(current!=NULL){
        if(current->data==x){
            return true;
            current=current->next;
        }
        return false;
    }
}

void deletion(node **head, int x)
{ 
    // If linked list is empty
    if (*head == NULL)
        return;
     
    // Store head node
    node* temp = *head;
 
    // If head needs to be removed
    if (x == 0)
    {
        // Change head
        *head = temp->next;    
        // Free old head
        delete(temp);            
        return;
    }
 
    // Find previous node of the node to be deleted
    for(int i = 0; temp != NULL && i < x- 1; i++)
        temp = temp->next;
 
    // If position is more than number of nodes
    if (temp == NULL || temp->next == NULL)
        return;
 
    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
     node *next = temp->next->next;
 
    // Unlink the node from linked list
    free(temp->next); // Free memory
     
    // Unlink the deleted node from list
    temp->next = next;
}

void display(node* head){    //displaying the data of linked list
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node *head=NULL;
    int x=3;
    /*int y=4;*/
    push(&head,1);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    search(head,3)?cout<<"YES\n":cout<<"NO\n";
    display(head);
    cout<<"Length of list: "<<getcount(head)<<" ";
    cout<<"\n";
    deletion(&head,0);
    display(head);
}