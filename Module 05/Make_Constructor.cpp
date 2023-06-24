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
int main()
{
    Node a(10);
    Node b(20);
    a.next=&b;
    cout<<a.val<<endl;
    cout<<b.val<<endl; // normally b er val
    cout<<(*a.next).val<<endl; // dereference kore b er val ana hoche
    cout<<a.next->val<<endl; // evabeu kora jai
    return 0;
}
