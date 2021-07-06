#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
};

node* newnode(int data){
    node* newnode=new node();
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}

void push(node** head,int data){
    node* newnode=new node();
    newnode->data=data;
    newnode->next=(*head);
    (*head)=newnode;
}

node* addlist(node* first, node* second){
    node* res=NULL;
    node* temp,*prev=NULL;
    int carry=0,sum;

    while(first!=NULL || second!=NULL){
        sum=carry+ (first?first->data:0)+(second?second->data:0);  //calculate the value of next digit. if list is empty then take 0
        carry=(sum>10)?1:0;
        sum=sum%10;
        temp=newnode(sum);  //create a new node with sum as data

        if(res==NULL)
            res=temp;
        else
            prev->next=temp;

        // Set prev for next insertion
        prev = temp;
 
        // Move first and second
        // pointers to next nodes
        if (first)
            first = first->next;
        if (second)
            second = second->next;
    }
 
    if (carry > 0)
        temp->next = newnode(carry);
 
    // return head of the resultant list
    return res;

    
}

void print(node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main(void){
    node* res=NULL;
    node* first=NULL;
    node* second=NULL;
    push(&first, 6);
    push(&first, 4);
    push(&first, 9);
    push(&first, 5);
    push(&first, 7);

    print(first);

    push(&second,4);
    push(&second,8);
   

    print(second);

    res=addlist(first,second);
    print(res);

}