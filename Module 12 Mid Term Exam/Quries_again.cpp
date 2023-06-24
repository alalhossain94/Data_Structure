#include <iostream>

struct Node {
    int value;
    Node* prev;
    Node* next;

    Node(int val) : value(val), prev(nullptr), next(nullptr) {}
};

void insertAtPosition(Node*& head, Node*& tail, int pos, int val) {
    Node* newNode = new Node(val);

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else if (pos == 0) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    } else {
        Node* current = head;
        int count = 0;

        while (current != nullptr && count < pos - 1) {
            current = current->next;
            count++;
        }

        if (current == nullptr) {
            std::cout << "Invalid" << std::endl;
            delete newNode;
            return;
        }

        newNode->next = current->next;
        newNode->prev = current;
        if (current->next != nullptr) {
            current->next->prev = newNode;
        }
        current->next = newNode;

        if (newNode->next == nullptr) {
            tail = newNode;
        }
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

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    int Q;
    std::cin >> Q;

    for (int i = 0; i < Q; i++) {
        int X, V;
        std::cin >> X >> V;

        insertAtPosition(head, tail, X, V);

        std::cout << "L -> ";
        printLinkedListForward(head);
        std::cout << "R -> ";
        printLinkedListBackward(tail);
    }

    return 0;
}
