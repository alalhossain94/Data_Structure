#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();

        // Jaboyiyo ja kaj ache

        int l, r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l==-1)
        {
            myLeft=NULL;
        }
        else
        {
            myLeft=new Node(l);
        }
        if(r==-1)
        {
            myRight=NULL;
        }
        else
        {
            myRight=new Node(r);
        }
        p->left=myLeft;
        p->right=myRight;

        // 3. Tar children gulo rakha    
        // if(p->left)
        // q.push(p->left);
        // if(p->right)
        // q.push(p->right);
        if(p->left != NULL) q.push(p->left);
        if(p->right != NULL) q.push(p->right);
            // NULL na f->left evabeu kora jai
    }
    return root;

}
void level_Order(Node* root)
{
    if(root==NULL)
    {
        cout<<"Tree nai"<<endl;
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        // 1. ber kore ana

        Node* f=q.front();
        q.pop();

        // 2. jabotiyo ja kah ache

        cout<<f->val<<" ";

        // 3. Tar children gulo rakha    
        if(f->left != NULL) q.push(f->left); 
        if(f->right != NULL) q.push(f->right);
           // NULL na f->left evabeu kora jai
        
    }
}

bool search(Node* root, int x)
{
    if(root==NULL) return false;
    if(root->val==x) return true;
    if(x < root->val)
    {
        // bool l=search(root->left,x);
        // if(l==true) return true;
        // else return false;

        //Alternative
        return search(root->left,x);
    }
    else   // x > root->val
    {
        search(root->right,x);
    }
}
int main()
{
    Node* root=input_tree();
    if(search(root,6))
    cout<<"YES, Found"<<endl;
    else
    cout<<"NO, Not Found"<<endl;
    return 0;
}