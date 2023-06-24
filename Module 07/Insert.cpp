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

int size(Node* head) // print korte parle size o count korte parbo 
                     // Complexity O(N) jehehe size porjonto Loop cholbe
{   
    Node* tmp=head; // head k copy kore tmp te rakha holo
    int count=0;
    while(tmp !=NULL) 
    {
        count++;   // print na kore count koro
        tmp=tmp->next; // eita i++ er moto i=i+1 ek ek kore shamne jau
    }
    return count;  // jehetu return korchi tai void na hoye int hobe
}

void insert(Node* head, int pos, int val) // Complexity O(N) jehehe N porjonto Loop cholbe
{
    Node *newNode =new Node(val);
    Node* tmp=head;
    for(int i=1; i<=pos-1; i++)
    {   
        tmp=tmp->next;
    }
    // tmp=pos-1 // ekhon ei position e achi
    newNode->next=tmp->next; // new node er shate porer node er connection
    tmp->next=newNode; // ager node  er shate new node er coonection
}

void insert_head(Node *&head, int val) // Complexity O(1)
{
    Node *newNode= new Node(val); // create new Node
    newNode->next=head; // new Node er next er shate head connect
    head=newNode; // new Node hoye jau akn head
}
void insert_tail(Node* &head, Node * &tail, int val) // Complexity O(1)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head=newNode; // jokhon kono Node thake na tokhon Null e head null e tail
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    
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
    Node* tail= d;
    head->next=a; // Connecting those Node
    a->next=b;
    b->next=c;
    c->next=d;


    print_linked_list(head); // insert er ager obostha 10 20 30 40 50 
    cout<<"Tail->"<<tail->val<<endl;
    // insert(head,3,100);  // 2 number index e 100 value insert // call na kore input nibo
    int pos, val;
    cin>>pos>>val;
    if(pos>size(head))  // position size theke boro hoye gele
    {
        cout<<"Invalid Index"<<endl; // Program crash na kore eita show korbe
    }
    else if(pos==0)
    {
        insert_head(head,val); //head nau val print koro
    }
    else if(pos==size(head))
    {
        insert_tail(head,tail, val);
    }
    else
    {
        insert(head, pos, val); // Invalid na hole insert koro
    }
    print_linked_list(head); // insert er porer obostha 10 20 30 100 40 50
    cout<<"Tail->"<<tail->val<<endl;
    return 0;
}
