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

        if(p->right != NULL) q.push(p->right);
        if(p->left != NULL) q.push(p->left);    
    }
    return root;

}
void find_minL_maxL(Node* root, int& minL, int& maxL)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL)
    {
        minL=min(minL,root->val);
        maxL=max(maxL,root->val);
    }
    if(root->left !=NULL)
    {
        find_minL_maxL(root->left, minL,maxL);
    }
    if(root->right !=NULL)
    {
        
    }

}
int main()
{
    Node* root=input_tree();
    int minL= INT_MAX;
    int maxL= INT_MIN;
    find_minL_maxL(root, minL, maxL);
    cout << maxL <<" ";
    cout << minL <<" ";
    return 0;
}