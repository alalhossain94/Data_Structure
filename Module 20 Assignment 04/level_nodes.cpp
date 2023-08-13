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
        if(p->left != NULL) q.push(p->left); 
        if(p->right != NULL) q.push(p->right);
           
    }
    return root;

}

void level_nodes_x(Node* root, int level)
{
    if(root==NULL)
    {
        cout<<"Invalid";
        return;
    }
    queue<Node*> q;
    q.push(root);
    for(int curLevel=0; !q.empty(); curLevel++)
    {
        int size=q.size();
        if(curLevel==level)
        {
            for(int i=0; i<size; i++)
            {
                Node* parent=q.front();
                q.pop();
                cout<<parent->val<<" ";
            }
            return;
        }
        for(int i=0; i<size; i++)
        {
            Node* parent=q.front();
            q.pop();
            if(parent->left) q.push(parent->left);
            if(parent->right) q.push(parent->right);
        }
    }
    cout<<"Invalid";
}


int main() {
    Node* root = input_tree();
    int level;
    cin>>level;
    level_nodes_x(root, level);
    return 0;
}
