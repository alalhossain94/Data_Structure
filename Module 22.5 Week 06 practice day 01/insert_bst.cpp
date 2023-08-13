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
void insert_bst(Node* &root, int val)
{
    Node* newNode=new Node(val);
    if(root==NULL)
    {
        root=newNode;
        return;
    }
    Node* cur=root;
    Node* par=NULL;
    while(cur!=NULL)
    {
        if(newNode->val < cur->val)
        {
            par=cur;
            cur=cur->left;
        }
        else
        {
            par=cur;
            cur=cur->right;
        }
    }
    
}
int main()
{
    
    return 0;
}