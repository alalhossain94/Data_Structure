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
    
    myStack stack_A;
    myQueue queue_B;
    int N,M;
    cin>>N>>M;
    for(int i=0; i<N; i++)
    {
        int x;
        cin>>x;
        stack_A.push(x);
    }
    for(int i=0; i<M; i++)
    {
        int x;
        cin>>x;
        queue_B.push(x);
    }

    while (!stack_A.empty() && !queue_B.empty()) {
        int top_A = stack_A.top();
        stack_A.pop();

        int front_B = queue_B.front();
        queue_B.pop();

        if (top_A != front_B) {
            cout << "NO" << endl;
            return 0;
        }
    }

    if (!stack_A.empty() || !queue_B.empty()) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    return 0;
}
