#include <iostream>
#include <queue>
#include <stack>

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

void reverseLevelOrderTraversal(Node* root) {
    if (root == nullptr)
        return;

    queue<Node*> q;
    stack<int> s;

    q.push(root);

    while (!q.empty()) {
        int size = q.size();

        for (int i=0; i<size; i++) {
            Node* curr = q.front();
            q.pop();

            s.push(curr->data);

            if (curr->right)
                q.push(curr->right);

            if (curr->left)
                q.push(curr->left);
        }
    }

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}

int main() {
    Node* root = input_tree();
    reverseLevelOrderTraversal(root);

    return 0;
}
