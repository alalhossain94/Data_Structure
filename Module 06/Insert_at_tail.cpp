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
void insert_at_tail(Node* head); // node shobshomoy pointer head receive kori
int main()
{
    Node* head=NULL;
    cout<<"Option 1: Insert at Tail"<<endl;
    int op;
    cin>>op;
    if(op==1)
    {

    }
    return 0;
}