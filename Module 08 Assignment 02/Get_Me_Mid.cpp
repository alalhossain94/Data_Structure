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
int size(Node* head)
{   
    Node* tmp=head; 
    int count=0;
    while(tmp !=NULL) 
    {
        count++;   
        tmp=tmp->next; 
    }
    return count; 
}
void MiddleValue(Node *head)
{
    int n=size(head);
    int mid=(n+1)/2;
    Node *tmp=head;
    for(int i=0; i<mid-1; i++)
    {
        tmp=tmp->next;
    }
    if(n % 2 ==0)
    {
        cout<<tmp->val<<" "<<tmp->next->val<<endl;

    }
    else
    {
        cout<<tmp->val<<endl;
    }
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
    for(Node *i=head; i->next !=NULL; i = i->next)
    {
        for(Node *j=i->next; j !=NULL; j = j->next)
        {
            if(i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    print_linked_list(head);
    int n=size(head);
    MiddleValue(head);
    
    return 0;
}