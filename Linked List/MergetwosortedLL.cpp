#include<iostream>
#include<cassert>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};
void MoveNode(Node** dest, Node** source);

Node* sortedMerge(Node* a, Node* b) 
{ 
    Node* result = NULL; 
     
    /* Base cases */
    if (a == NULL) 
        return(b); 
    else if (b == NULL) 
        return(a); 
     
    /* Pick either a or b, and recur */
    if (a->data <= b->data) 
    { 
        result = a; 
        result->next = sortedMerge(a->next, b); 
    } 
    else
    { 
        result = b; 
        result->next = sortedMerge(a, b->next); 
    } 
    return(result); 
} 

/*void MoveNode(Node** dest, Node** source){
	Node* newNode=*source;  //front source node
	assert( newNode != NULL);
	
	//advance the source pointer
	*source=newNode->next;
	
	//link the old dest off the new node
	newNode->next=*dest;
	
	//move dest to point to the new node
	*dest=newNode;
}*/

void push(Node** head_ref, int data){
	Node* new_node= new Node();
	new_node->data=data;
	new_node->next=*head_ref;
	*head_ref=new_node;
}

void printList(Node *node){
	while(node != NULL){
		cout<<node->data<<" ";
		node=node->next;
	}
}

int main(){
	Node *res=NULL;
	Node *a = NULL;
	Node *b = NULL;
	
	push(&a,15);
	push(&a,10);
	push(&a,5);
	
	push(&b,20);
	push(&b,3);
	push(&b,2);
	
	cout<<"Given Linked List: ";
	printList(a);

	cout<<"\nGiven Linked List: ";
	printList(b);
	
	res = sortedMerge(a,b);
	
	cout<<"\nMerged Linked List is ";
	printList(res);
	
	return 0;
	
}
