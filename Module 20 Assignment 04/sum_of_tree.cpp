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
int sum_of_nodes_values(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int sum=root->val;
    sum +=sum_of_nodes_values(root->left);
    sum +=sum_of_nodes_values(root->right);
    return sum;
}

int main()
{   
 
    Node* root=input_tree();
    int sum=sum_of_nodes_values(root);
    cout<<sum<<endl;

    return 0;
}