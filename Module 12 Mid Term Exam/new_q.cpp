// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node* next;
//         Node* prev;
        
//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//         this->prev=NULL;
//     }

// };

// void insertAtIndex(Node** head, Node** tail, int index, int value) 
// {
//     if (index < 0) 
//     {
//         cout << "Invalid" << endl;
//         return;
//     }

//     Node* newNode = new Node(value);

//     if (*head == nullptr) 
//     {
//         // Empty list
//         if (index != 0) 
//         {
//             cout << "Invalid" << endl;
//             return;
//         }
//         *head = newNode;
//         *tail = newNode;
//     } else if (index == 0) {
//         // Insert at the beginning
//         newNode->next = *head;
//         (*head)->prev = newNode;
//         *head = newNode;
//     } else {
//         Node* current = *head;
//         int currentIndex = 0;

//         while (current != nullptr && currentIndex < index) {
//             current = current->next;
//             currentIndex++;
//         }

//         if (current == nullptr && currentIndex != index) {
//             std::cout << "Invalid" << std::endl;
//             return;
//         }

//         if (current == nullptr) {
//             // Insert at the end
//             (*tail)->next = newNode;
//             newNode->prev = *tail;
//             *tail = newNode;
//         } else {
//             // Insert in the middle
//             newNode->prev = current->prev;
//             newNode->next = current;
//             current->prev->next = newNode;
//             current->prev = newNode;
//         }
//     }

//     Node* temp = *head;
//     std::cout << "L -> ";
//     while (temp != nullptr) {
//         std::cout << temp->val << " ";
//         temp = temp->next;
//     }
//     std::cout << std::endl;

//     temp = *tail;
//     std::cout << "R -> ";
//     while (temp != nullptr) {
//         std::cout << temp->val << " ";
//         temp = temp->prev;
//     }
//     std::cout << std::endl;
// }

// int main() {
//     Node* head = nullptr;
//     Node* tail = nullptr;
//     int Q;
//     std::cin >> Q;
//     for (int i = 0; i < Q; i++) {
//         int X, V;
//         std::cin >> X >> V;
//         insertAtIndex(&head, &tail, X, V);
//     }

//     return 0;
// }
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

void printLinkedList(Node* head, Node* tail) {
    Node* temp = head;
    std::cout << "L -> ";
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;

    temp = tail;
    std::cout << "R -> ";
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->prev;
    }
    std::cout << std::endl;
}

Node* insertAtIndex(Node* head, Node* tail, int index, int value) {
    if (index < 0) {
        std::cout << "Invalid" << std::endl;
        return head;
    }

    Node* newNode = new Node(value);

    if (head == nullptr) {
        // Empty list
        if (index != 0) {
            std::cout << "Invalid" << std::endl;
            return head;
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
            return head;
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

    printLinkedList(head, tail);

    return head;
}

int main() {
    int Q;
    std::cin >> Q;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < Q; i++) {
        int X, V;
        std::cin >> X >> V;
        head = insertAtIndex(head, tail, X, V);
        if (i == 0) {
            tail = head;  // Update tail after the first insertion
        }
    }

    return 0;
}


