#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;

    Node(int value) {
        val = value;
        prev = nullptr;
        next = nullptr;
    }
};

Node* insertAtIndex(Node* head, int index, int value) 
{
    if (index < 0) 
    {
        cout << "Invalid" << endl;
        return head;
    }

    Node* newNode = new Node(value);

    if (head == nullptr) 
    {
        // Empty list
        if (index != 0) 
        {
            cout << "Invalid" << endl;
            return head;
        }
        head = newNode;
    } 
    else if (index == 0) 
    {
        // Insert at the beginning
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    } 
    else 
    {
        Node* current = head;
        int currentIndex = 0;

        while (current != nullptr && currentIndex < index) 
        {
            current = current->next;
            currentIndex++;
        }

        if (current == nullptr && currentIndex != index) 
        {
            cout << "Invalid" << endl;
            return head;
        }

        if (current == nullptr) 
        {
            // Insert at the end
            Node* tail = head;
            while (tail->next != nullptr) 
            {
                tail = tail->next;
            }
            tail->next = newNode;
            newNode->prev = tail;
        } 
        else 
        {
            // Insert in the middle
            newNode->prev = current->prev;
            newNode->next = current;
            current->prev->next = newNode;
            current->prev = newNode;
        }
    }

    Node* temp = head;
    cout << "L -> ";
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    temp = head;
    while (temp->next != nullptr) 
    {
        temp = temp->next;
    }

    cout << "R -> ";
    while (temp != nullptr) 
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;

    return head;
}

int main() {
    int Q;
    cin >> Q;

    Node* head = nullptr;

    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        head = insertAtIndex(head, X, V);
    }

    return 0;
}
