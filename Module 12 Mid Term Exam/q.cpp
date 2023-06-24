#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

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
        } 
        else {
            Node* current = getNodeAt(index - 1);
            newNode->prev = current;
            newNode->next = current->next;
            current->next->prev = newNode;
            current->next = newNode;
        }

        printLeftToRight();
        printRightToLeft();
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

    void printLeftToRight() {
        Node* current = head;
        std::cout << "L -> ";

        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }

        std::cout << std::endl;
    }

    void printRightToLeft() {
        Node* current = tail;
        std::cout << "R -> ";

        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->prev;
        }

        std::cout << std::endl;
    }
};

int main() {
    int Q;
    std::cin >> Q;

    DoublyLinkedList dll;

    for (int i = 0; i < Q; i++) {
        int X, V;
        std::cin >> X >> V;
        dll.insert(X, V);
    }

    return 0;
}
