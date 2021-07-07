#include<iostream>
using namespace std;

//o(n)

class node{
    public:
        int data;
        node* next;
};

// Returns count of nodes present in loop.
int countNodes(node *n)
{
    int res = 1;
    node *temp = n;
    while (temp->next != n)
    {
        res++;
        temp = temp->next;
    }
    return res;
}
 
/* This function detects and counts loop
nodes in the list. If loop is not there
in then returns 0 */
int countNodesinLoop(node *list)
{
    node *slow_p = list, *fast_p = list;
 
    while (slow_p && fast_p &&
                     fast_p->next)
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
 
        /* If slow_p and fast_p meet at
        some point then there is a loop */
        if (slow_p == fast_p)
            return countNodes(slow_p);
    }
 
    /* Return 0 to indeciate that
       their is no loop*/
    return 0;
}
 

node* newnode(int key){
    node* temp=new node();
    temp->data=key;
    temp->next=NULL;
    return temp;
}

int main(){
    node* head=newnode(1);
    head->next=newnode(2);
    head->next->next=newnode(3);
    head->next->next->next=newnode(4);

    //create loop
    head->next->next->next->next=head->next;
    cout<<"Length of loop: "<<countNodesinLoop(head)<<endl;
    return 0;

}