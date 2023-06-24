#include <iostream>

struct Node {
    int data;
    Node* next;
};

void insertAtHead(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* tail = head;
        while (tail->next != nullptr) {
            tail = tail->next;
        }
        tail->next = newNode;
    }
}

void printHeadAndTail(Node* head) {
    if (head == nullptr) {
        std::cout << "Empty list" << std::endl;
        return;
    }

    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    std::cout << head->data << " " << tail->data << std::endl;
}


int main() {
    int Q;
    std::cin >> Q;

    Node* head = nullptr;

    for (int i = 0; i < Q; ++i) {
        int X, V;
        std::cin >> X >> V;

        if (X == 0) {
            insertAtHead(head, V);
        } else if (X == 1) {
            insertAtTail(head, V);
        }

        printHeadAndTail(head);
    }

    return 0;
}
