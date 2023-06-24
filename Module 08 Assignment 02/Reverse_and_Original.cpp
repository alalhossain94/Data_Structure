#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void print_linked_list(Node* head) 
{
    Node * tmp=head;
    while(tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next; 
    }
    cout<<endl;
}
void insert_tail(Node* &head, Node * &tail, int value) 
{
    Node *newNode = new Node(value);
    if(head == NULL)
    {
        head=newNode; 
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    
}
void print_reverse(Node *head)
{
    if (head == NULL)
    return;
    print_reverse(head->next);
    cout<<head->val<<" ";  
}
int main()
{   
    Node *head=NULL;
    Node *tail=NULL;
    int value;
    while(true)
    {
        cin>>value;
        if(value== -1)
        break;
        insert_tail(head,tail, value);
    }
    print_reverse(head);
    cout<<endl;
    print_linked_list(head);
    return 0;
}