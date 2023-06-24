#include <bits/stdc++.h>
using namespace std;
class node
{
  public:
   int val;
   node* next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_head(node* &head, int val)
{
    node* new_node = new node(val);
    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
}
void insert_at_tail(node* &head,node* &tail,int val)
{
    node* new_node=new node(val);
    if(head==NULL)
    {
       head=new_node;
       tail=new_node;
    }
    else
    {
       tail->next=new_node;
       tail=new_node;
    }
}
int main()
{
   node* head=NULL;
   node* tail=NULL;
   int q;
   cin>>q;
   while(q--)
   {
     int x,val;
     cin>>x>>val;
     if(x==0)
     {
         insert_at_head(head,val);
     }
     if(x==1)
     {
         insert_at_tail(head,tail,val);
     }
     cout<<head->val<<" "<<tail->val<<endl;
   }
    return 0;
}
