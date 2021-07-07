#include<iostream>
using namespace std;
	
class Node{
	public:
		int data;
		Node *next;
		
};

int getcount(Node* head);

int getInter(int d,Node* head1, Node* head2);

int getIntersection(Node* head1, Node* head2){
	int c1=getcount(head1);
	int c2=getcount(head2);
	int d;
	if(c1>c2){
		d=c1-c2;
		return getInter(d,head1,head2);
	}
	else{
		d=c2-c1;
		return getInter(d,head2,head1);
	}
}

int getInter(int d, Node* head1, Node* head2){
	Node* current1=head1;  //starting at start of bigger list
	Node* current2=head2;
	
	//move the pointer forward
	for(int i=0;i<d;i++){
		if(current1==NULL){
			return -1;
		}
		current1=current1->next;
	}
	
	// Move both pointers of both list till they
    // intersect with each other
    while(current1 != NULL && current2 != NULL) {
        if (current1 == current2)
            return current1->data;
 
        // Move both the pointers forward
        current1 = current1->next;
        current2 = current2->next;
    }
 
    return -1;
}


int getcount(Node *head){
	Node *current=head;
	int count=0;
	while(current!=NULL){
		count++;
		current=current->next;
	}
	return count;
}

/*

Method 3(Using difference of node counts) 

Get count of the nodes in the first list, let count be c1.
Get count of the nodes in the second list, let count be c2.
Get the difference of counts d = abs(c1 � c2)
Now traverse the bigger list from the first node till d nodes so that
from here onwards both the lists have equal no of nodes 
Then we can traverse both the lists in parallel till we come across a
common node. (Note that getting a common node is done by
comparing the address of the nodes)

*/
int main(){
	Node *newNode;
	
	Node* head1=new Node();
	head1->data=10;
	
	Node* head2=new Node();
	head1->data=3;
	
	newNode=new Node();
	newNode->data=6;
	head2->next=newNode;
	
	newNode=new Node();
	newNode->data=9;
	head2->next->next=newNode;
	
	newNode=new Node();
	newNode->data=15;
	head1->next=newNode;
	head2->next->next->next=newNode;
	
	newNode = new Node();
	newNode->data=30;
	head1->next->next=newNode;
	
	head1->next->next->next=NULL;
	
	cout<<"The node of intersection is "<<getIntersection(head1,head2);
	
}
