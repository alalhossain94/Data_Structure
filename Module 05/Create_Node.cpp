#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

};
int main()
{
    Node a,b;
    a.val=10;
    b.val=20;

    a.next=&b;
    b.next=NULL;
    cout<<a.val<<endl;
    // cout<<b.val<<endl;
    // cout<<(*a.next).val<<endl; // dereference kore b er val ana hoche
    cout<<a.next->val<<endl; // evabeu kora jai
    return 0;
}
