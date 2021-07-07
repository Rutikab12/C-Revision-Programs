#include<iostream>
#include<conio.h>
using namespace std;

class Node{ 
	public:   //hashing approach
	int data;
	Node *next;
};

//utility function to create new Node
Node *newNode(int data){
	Node *temp= new Node();
	temp->data= data;
	temp->next=NULL;
	return temp;
}

void removeduplicates(Node *start){
	
	Node *ptr1, *ptr2, *dup;
    ptr1 = start;
 
    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL)
    {
        ptr2 = ptr1;
 
        /* Compare the picked element with rest
           of the elements */
        while (ptr2->next != NULL)
        {
            /* If duplicate then delete it */
            if (ptr1->data == ptr2->next->data)
            {
                /* sequence of steps is important here */
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete(dup);
            }
            else /* This is tricky */
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
	
}
	/*stack <int> s; //create hash
	Node *curr=start; //pick elements one by one
	Node *prev=NULL;
	
	while(curr!=NULL){
		if(s.find(curr->data)!=s.end()){ //if current is seen before 
			prev->next=curr->next;
			delete(curr);
		}
		else{
			s.insert(curr->data);
			prev=curr;
		}
		curr=prev->next;
	}*/


/*void push(Node **head_ref, int data){
	Node* new_node=new Node();
	new_node->data=data;
	new_node->next=*head_ref;
	*head_ref=new_node;
}*/

void printList(Node* node){
	while(node!=NULL){
		cout<<node->data<<" ";
		node=node->next;
	}
}

int main(){
	Node *start=newNode(10);
	start->next=newNode(12);
	start->next->next->next = newNode(11);
    start->next->next->next->next = newNode(12);
    start->next->next->next->next->next =newNode(11);
    start->next->next->next->next->next->next = newNode(10);
	 
	 cout<<"Given Linked List: ";
	 printList(start);
	 
	 removeduplicates(start);
	 
	 cout<<"\nList after duplicate removal: ";
	 printList(start);
	 
	 return 0;
	 //O(n2)
	 
}
