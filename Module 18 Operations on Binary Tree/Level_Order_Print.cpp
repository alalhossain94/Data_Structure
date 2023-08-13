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
        // 1. ber kore ana#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node*> q;
    if (root)
        q.push(root);
    while (!q.empty()) {
        Node* p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if (l == -1) {
            myLeft = NULL;
        } else {
            myLeft = new Node(l);
        }
        if (r == -1) {
            myRight = NULL;
        } else {
            myRight = new Node(r);
        }
        p->left = myLeft;
        p->right = myRight;

        if (p->left != NULL)
            q.push(p->left);
        if (p->right != NULL)
            q.push(p->right);
    }
    return root;
}

bool isPerfectBinaryTree(Node* root) {
    if (root == nullptr)
        return true;

    queue<Node*> q;
    q.push(root);
    bool foundNonFullNode = false;

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        if (curr->left) {
            if (foundNonFullNode || curr->right == nullptr)
                return false;
            q.push(curr->left);
        } else {
            foundNonFullNode = true;
        }

        if (curr->right) {
            if (foundNonFullNode)
                return false;
            q.push(curr->right);
        } else {
            foundNonFullNode = true;
        }
    }

    return true;
}

int main() {
    Node* root = input_tree();

    if (isPerfectBinaryTree(root))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}


        Node* f=q.front();
        q.pop();

        // 2. jabotiyo ja kah ache

        cout<<f->val<<" ";

        // 3. Tar children gulo rakha    
        if(f->right != NULL) q.push(f->right);
        if(f->left != NULL) q.push(f->left);    // NULL na f->left evabeu kora jai
        
    }
}
int main()
{   
    Node *root=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    Node *c=new Node(40);
    Node *d=new Node(50);
    Node *e=new Node(60);
    Node *f=new Node(70);
    Node *g=new Node(80);
    Node *h=new Node(90);
    Node *i=new Node(100);

    // connection

    root->left=a;
    root->right=b;
    a->left=c;
    a->right=h;
    c->right=e;
    b->right=d;
    d->left=f;
    d->right=g;
    h->right=i;
    
    level_Order(root);
    return 0;
}