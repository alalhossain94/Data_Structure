#include<bits/stdc++.h>
using namespace std;

struct Node {
    int value;
    Node* prev;
    Node* next;

    Node(int val) : value(val), prev(nullptr), next(nullptr) {}
};

void insertAtPosition(Node*& head, Node*& tail, int pos, int val) {
    Node* newNode = new Node(val);

    newNode->next = head ;
    newNode->prev = nullptr;
    if (head != nullptr) {
        head->prev = newNode;
    }
    head = newNode;

    if (tail == nullptr) {
        tail = head;
    }
}

void printLinkedListForward(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

void printLinkedListBackward(Node* tail) {
    Node* current = tail;
    while (current != nullptr) {
        std::cout << current->value << " ";
        current = current->prev;
    }
    std::cout << std::endl;
}
int size(Node* head)
{
    Node* tmp=head;
    int cnt=0;
    while(tmp != NULL) 
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;

}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    int Q;
    std::cin >> Q;

    for (int i = 0; i < Q; i++) {
        int X, V;
        std::cin >> X >> V;
        if(X > size(head))
        {
            cout<<"Invalid"<<endl;
        }
        insertAtPosition(head, tail, X, V);

        std::cout << "L -> ";
        printLinkedListForward(head);
        std::cout << "R -> ";
        printLinkedListBackward(tail);
    }

    return 0;
}
