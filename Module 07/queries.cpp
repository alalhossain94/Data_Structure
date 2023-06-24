#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }

};

// void insertAtHead(Node*& head, int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = head;
//     head = newNode;
// }
void insert_head(Node *&head, int val) // Complexity O(1)
{
    Node *newNode= new Node(val); // create new Node
    newNode->next=head; // new Node er next er shate head connect
    head=newNode; // new Node hoye jau akn head
}
// void insertAtTail(Node*& head, int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = nullptr;

//     if (head == nullptr) {
//         head = newNode;
//     } else {
//         Node* tail = head;
//         while (tail->next != nullptr) {
//             tail = tail->next;
//         }
//         tail->next = newNode;
//     }
// }
void insert_tail(Node* &head, Node * &tail, int val) 
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head=newNode; 
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    
}

void printHeadAndTail(Node *head) {
    Node *tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    cout << head->val <<" " <<tail->val <<endl;
  
}
// void print_linked_list(Node* head) 
// {
//     Node* tail=head;
//     Node * tmp=head;
//     while(tmp->next !=NULL)
//     {
//         // cout<<tmp->val<<" ";
//         tmp=tmp->next; 
//     }
//     cout << head->val << endl;
//     cout << tail->val<< endl;
// }

// int main() {

//     Node *head=NULL;
//     Node *tail=NULL;
    
//     int Q;
//     cin >> Q;

//     for (int i = 0; i < Q; ++i)
//     {
//         int X, V;
//         cin >> X >> V;

//         if (X == 0) {
//             insert_head(head,V);
//         } 
//         else if (X == 1) 
//         {
//             insert_tail(head,V);
//         }

//         print_linked_list(head);
//     }


//     return 0; 
// }
int main() {
    int Q;
    std::cin >> Q;
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < Q; i++) {
        int X, V;
        std::cin >> X >> V;

        if (X == 0) {
            insert_head(head,V);
        } else if (X == 1) {
            insert_tail(head, tail, V);
        }

        // print_linked_list(head);
        printHeadAndTail(head);
    }

   

    return 0;
}