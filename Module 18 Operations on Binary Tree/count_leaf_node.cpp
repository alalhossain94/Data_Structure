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
        if(p->right != NULL) q.push(p->right);
        if(p->left != NULL) q.push(p->left);    // NULL na f->left evabeu kora jai
    }
    return root;

}
int count_leaf(Node* root)
{   
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) 
    {
        return 1;
    }
    else
    {
        int l=count_leaf(root->left);
        int r=count_leaf(root->right);
        return l+r;
    }

}

int main()
{   
 
    Node* root=input_tree();
    cout<<count_leaf(root)<<endl;
   
    return 0;
}