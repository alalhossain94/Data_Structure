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
int main()
{   
    Node *head1=NULL;
    Node *tail1=NULL;
    Node *head2=NULL;
    Node *tail2=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val== -1)
        break;
        insert_tail(head1,tail1, val);
    }
    while(true)
    {
        cin>>val;
        if(val== -1)
        break;
        insert_tail(head2,tail2, val);
    }
    Node *tmp1=head1;
    Node *tmp2=head2;
    while(tmp1 != NULL && tmp2 !=NULL) 
    {
        if(tmp1->val != tmp2->val)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }   
    if(tmp1 == NULL && tmp2 == NULL)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
//  Same arek ta code aktu different


// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//     int val;
//     Node* next;

//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void insert_tail_1(Node* &head1, Node * &tail1, int val) 
// {
//     Node *newNode = new Node(val);
//     if(head1 == NULL)
//     {
//         head1=newNode; 
//         tail1=newNode;
//         return;
//     }
//     tail1->next=newNode;
//     tail1=newNode; 
// }
// void insert_tail_2(Node* &head2, Node * &tail2, int val) 
// {
//     Node *newNode = new Node(val);
//     if(head2 == NULL)
//     {
//         head2=newNode; 
//         tail2=newNode;
//         return;
//     }
//     tail2->next=newNode;
//     tail2=newNode; 
// }
// int main()
// {   
//     Node *head1=NULL;
//     Node *tail1=NULL;
//     Node *head2=NULL;
//     Node *tail2=NULL;
//     int val;
//     while(true)
//     {
//         cin>>val;
//         if(val== -1)
//         break;
//         insert_tail_1(head1,tail1, val);
//     }
//     while(true)
//     {
//         cin>>val;
//         if(val== -1)
//         break;
//         insert_tail_2(head2,tail2, val);
//     }
//     Node *tmp1=head1;
//     Node *tmp2=head2;
//     while(tmp1 != NULL && tmp2 !=NULL) 
//     {
//         if(tmp1->val != tmp2->val)
//         {
//             cout<<"NO"<<endl;
//             return 0;
//         }
//         tmp1=tmp1->next;
//         tmp2=tmp2->next;
//     }   
//     if(tmp1 == NULL && tmp2 == NULL)
//     {
//         cout<<"YES"<<endl;
//     }
//     else
//     {
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }