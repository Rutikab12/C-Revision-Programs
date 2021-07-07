#include<iostream>
#include<stdlib.h>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
};
/*
Traverse the list from the head (or start) node. While traversing, 
compare each node with its next node. If data of next node is same 
as current node then delete the next node. 
Before we delete a node, we need to store next pointer of the node
*/

void removeduplicates(Node* head){
	Node* current=head;
	Node* next_next; //ponter to store the next pointer of a node to be deleted
	if(current==NULL)
	return;
	while(current->next!=NULL){ //traverse the list till last node
		if(current->data==current->next->data){ //compare current with next node
			next_next=current->next->next;
			free(current->next);
			current->next=next_next;
		}
		else{  //only use when no deletion
			current=current->next;
		}
	}
	
}
void push(Node **head_ref, int data){
	Node* new_node=new Node();
	new_node->data=data;
	new_node->next=*head_ref;
	*head_ref=new_node;
}

void printList(Node *node){
	while(node!=NULL){
		cout<<node->data<<" ";
		node=node->next;
	}
}

int main(){
	Node* head=NULL;
	
	push(&head,20);
	push(&head,13);
	push(&head,13);
	push(&head,11);		
	push(&head,11);
	push(&head,11);
	
	cout<<"Given linked list: ";
	printList(head);
	
	removeduplicates(head);
	
	cout<<"\nLinked list after duplicate removal: ";
	printList(head);
	
	return 0;  //O(n)

}

