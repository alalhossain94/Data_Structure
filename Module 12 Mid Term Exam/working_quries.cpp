#include <iostream>

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

  void insertAtIndex(int index, int value) 
  {
        if (index < 0) {
            std::cout << "Invalid" << std::endl;
            return;
        }

        Node* newNode = new Node(value);

        if (head == nullptr) {
            // Empty list
            if (index != 0) {
                std::cout << "Invalid" << std::endl;
                return;
            }
            head = newNode;
            tail = newNode;
        } else if (index == 0) {
            // Insert at the beginning
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        } else {
            Node* current = head;
            int currentIndex = 0;

            while (current != nullptr && currentIndex < index) {
                current = current->next;
                currentIndex++;
            }

            if (current == nullptr && currentIndex != index) {
                std::cout << "Invalid" << std::endl;
                return;
            }

            if (current == nullptr) {
                // Insert at the end
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            } else {
                // Insert in the middle
                newNode->prev = current->prev;
                newNode->next = current;
                current->prev->next = newNode;
                current->prev = newNode;
            }
        }
    }

    void printLeftToRight() {
        Node* current = head;

        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }

        std::cout << std::endl;
    }

    void printRightToLeft() {
        Node* current = tail;

        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->prev;
        }

        std::cout << std::endl;
    }

int main() {
    int Q;
    std::cin >> Q;

    DoublyLinkedList list;

    for (int i = 0; i < Q; i++) {
        int X, V;
        std::cin >> X >> V;
        list.insertAtIndex(X, V);
        list.printLeftToRight();
        list.printRightToLeft();
    }

    return 0;
}
