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

Node* convert(int a[], int n, int l, int r)
{
    // Base case
    if(l > r) return NULL;

    int mid=(l+r)/2;
    Node* root=new Node(a[mid]);
    Node* leftRoot=convert(a,n,l,mid-1);
    Node* rightRoot=convert(a,n,mid+1,r);
    root->left=leftRoot;
    root->right=rightRoot;
    return root;
}
int main()  
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    Node* root=convert(a,n,0,n-1);
    level_Order(root);
    return 0;
   
}
