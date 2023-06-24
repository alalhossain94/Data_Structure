#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int getSize(Node* head) {
    int size = 0;
    Node* current = head;
    while (current != NULL) {
        size++;
        current = current->next;
    }
    return size;
}

void insert(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        insert(head, value);
    }

    cout << "Linked List: ";
    printLinkedList(head);

    int linkedListSize = getSize(head);
    cout << "Size of the linked list: " << linkedListSize << endl;

    return 0;
}


