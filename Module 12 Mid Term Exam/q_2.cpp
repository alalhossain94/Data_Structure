#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

Node* head = nullptr;
Node* tail = nullptr;

void insert(int index, int value) {
    Node* newNode = new Node(value);

    if (index < 0 || index > getSize()) {
        std::cout << "Invalid" << std::endl;
        delete newNode;
        return;
    }

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else if (index == 0) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    } else if (index == getSize()) {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    } else {
        Node* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        newNode->prev = current;
        newNode->next = current->next;
        current->next->prev = newNode;
        current->next = newNode;
    }

    Node* current = head;
    std::cout << "L -> ";
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;

    current = tail;
    std::cout << "R -> ";
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->prev;
    }
    std::cout << std::endl;
}

int getSize() {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    int Q;
    std::cin >> Q;

    for (int i = 0; i < Q; i++) {
        int X, V;
        std::cin >> X >> V;
        insert(X, V);
    }

    return 0;
}
