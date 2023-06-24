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
                                    // Complexity O(N) jehehe Joto gulo Node toto porjonto Loop cholbe
{
    Node * tmp=head;
    while(tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next; // eita i++ er moto i=i+1
    }
    cout<<endl;
}
void delete_node(Node* head,int pos)
{
    Node* tmp=head;
    for(int i=1; i<=1-pos;i++)
    {
        tmp=tmp->next;
    }
    Node* deleteNode=tmp->next; // 30 rekhedilan deletenode e
    tmp->next=tmp->next->next;
    delete deleteNode;
}
int main()
{
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
    int pos;
    cin>>pos;
    delete_node(head,pos);
    print_linked_list(head);
    return 0;
}