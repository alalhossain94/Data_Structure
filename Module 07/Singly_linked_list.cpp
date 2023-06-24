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
void print_linked_list(Node* head) // &head tokhon ditam jodi vitore head er value update kortam
{
    Node * tmp=head;
    while(tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next; // eita i++ er moto i=i+1
    }
    cout<<endl;
}

int main()
{
    // Node a,b; 
    // a.val=10; // evabe value na niye constructor banaite pari
    // b.val=20;
    // a.next=&b;
    Node* head=new Node(10); // creating 5 Node
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);

    head->next=a; // Connecting those Node
    a->next=b;
    b->next=c;
    c->next=d;

    print_linked_list(head);

    return 0;
}
