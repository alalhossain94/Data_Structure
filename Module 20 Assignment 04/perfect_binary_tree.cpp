#include <iostream>
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

int countNodes(Node* root) {
    if (root == nullptr)
        return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int getHeight(Node* root) {
    if (root == nullptr)
        return 0;

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
}

bool isPerfectBinaryTree(Node* root) {
    if (root == nullptr)
        return false;

    int totalNodes = countNodes(root);
    int height = getHeight(root);
    int expectedNodes = pow(2, height) - 1;

    return (totalNodes == expectedNodes);
}

int main() {
    Node* root = input_tree();

    if (isPerfectBinaryTree(root))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
