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
void insert_tail(Node* &head, Node * &tail, int val) 
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head=newNode; 
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode; 
}
void Max_Min(Node *head)
{
    int max=head->val;
    int min=head->val;
    Node *tmp=head;
    while(tmp != NULL)
    {
        if(tmp->val > max)
        {
            max=tmp->val;
        }
        else if(tmp->val < min) 
        {
            min=tmp->val;
        }
        tmp=tmp->next;
    }
    cout<<max<<" "<<min<<endl;    
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val== -1)
        break;
        insert_tail(head,tail, val);
    }
    Max_Min(head);
    return 0;
}