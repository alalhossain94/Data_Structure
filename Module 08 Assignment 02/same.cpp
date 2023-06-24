#include <iostream>

struct Node {
    int data;
    Node* next;
};

int main() 
{
    Node* head1 = nullptr;
    Node* tail1 = nullptr;
    Node* head2 = nullptr;
    Node* tail2 = nullptr;

    // Read values for the first linked list
    int value;
    while (true) {
        std::cin >> value;
        if (value == -1) {
            break;
        }
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        if (head1 == nullptr) {
            head1 = tail1 = newNode;
        } else {
            tail1->next = newNode;
            tail1 = newNode;
        }
    }

    // Read values for the second linked list
    while (true) {
        std::cin >> value;
        if (value == -1) {
            break;
        }
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        if (head2 == nullptr) {
            head2 = tail2 = newNode;
        } else {
            tail2->next = newNode;
            tail2 = newNode;
        }
    }

    // Compare the lists
    Node* temp1 = head1;
    Node* temp2 = head2;

    while (temp1 != nullptr && temp2 != nullptr) {
        if (temp1->data != temp2->data) {
            std::cout << "NO" << std::endl;
            return 0;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 == nullptr && temp2 == nullptr) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
