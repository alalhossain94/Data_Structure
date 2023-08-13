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
class myQueue
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;   //psuh kor mane size barbe
        Node* newNode=new Node(val);
        // prothom val insert hobe na ai tai head aitai tail 
        // aita corner case er jonno noile error asbe
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=tail->next;
    }
    void pop()
    {
        sz--;  // pop kora mane size kombe
        Node* deleteNode=head; 
        head=head->next;
        delete deleteNode;
        //But tail to garbage value dibe tai tail ke NULL bolte hobe
        if(head== NULL)
        {
            tail=NULL;
        }
    } 
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0) return true;
        else return false;
    }

};
int main()
{
    myQueue q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}