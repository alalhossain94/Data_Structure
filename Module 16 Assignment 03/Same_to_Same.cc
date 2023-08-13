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
        sz++;   
        Node* newNode=new Node(val);
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
        sz--;  
        Node* deleteNode=head; 
        head=head->next;
        delete deleteNode;
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
class myStack
{
    public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if(v.size()==0)
        return true;
        else 
        return false;
    }
};

int main()
 {
    myStack st;
    myQueue q;
    int N,M;
    cin>>N>>M;
    for(int i=0; i<N; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    for(int i=0; i<M; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while(!st.empty() && !q.empty())
    {
        int top = st.top();
        st.pop();
        int front= q.front();
        q.pop();
        if(top != front)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(!st.empty() || !q.empty())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    return 0; 
}
