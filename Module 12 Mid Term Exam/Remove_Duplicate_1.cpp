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
void deleteDuplicates(Node* head)
{
    if(head==NULL)  return;
    Node* tmp=head;
    while(tmp->next != NULL)
    {
        if(tmp->val== tmp->next->val)
        {
            tmp->next=tmp->next->next;
        }
        if(tmp->next == NULL) break;
        else if(tmp->val != tmp->next->val)
        {
            tmp=tmp->next;
        }
    }
    return;
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
            if(i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    deleteDuplicates(head);
    print_linked_list(head);
    return 0;
}