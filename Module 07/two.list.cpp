#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
};

void areLinkedListsEqual(Node* head1, Node* head2) 
{
    Node *tmp1=head1;
    Node *tmp2=head2;
    while (tmp1 && tmp2) {
        if (tmp1->val != tmp2->val) 
        {
            cout << "NO" << endl;
            return;
        }
      
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    // // If both lists reached the end, they are equal
    if (tmp1 == NULL && tmp2 == NULL) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

void print_linked_list1(Node* head1) 
{
    Node * tmp1=head1;
    while(tmp1 !=NULL)
    {
        cout<<tmp1->val<<" ";
        tmp1=tmp1->next; 
    }
    cout<<endl;
}
void print_linked_list2(Node* head2) 
{
    Node * tmp2=head2;
    while(tmp2 !=NULL)
    {
        cout<<tmp2->val<<" ";
        tmp2=tmp2->next; 
    }
    cout<<endl;
}
void insert_tail(Node* &head1, Node * &tail, int value) 
{
    Node *newNode = new Node(value);
    if(head1 == NULL)
    {
        head1=newNode; 
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    
}
void insert_tail(Node* &head2, Node * &tail, int value) 
{
    Node *newNode = new Node(value);
    if(head2 == NULL)
    {
        head2=newNode; 
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    
}
int main() {
    Node *head1=NULL;
    Node *tail=NULL;
    int value;
    while(true)
    {
        cin>>value;
        if(value== -1)
        break;
        insert_tail(head1,tail, value);
    }
    Node *head2=NULL;
    Node *tail=NULL;
    int value;
    while(true)
    {
        cin>>value;
        if(value== -1)
        break;
        insert_tail(head2,tail, value);
    }

    // Check if the two linked lists are equal
    areLinkedListsEqual(head1, head2);

    return 0;
}
