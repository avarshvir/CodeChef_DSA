#include<iostream>
using namespace std;
class LinkedList {
    public:
    Node* head;
    
    // Create the Node tail
    Node* tail;

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        
        // If there are no nodes in the linked list
        // Set the new node as head and return
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        
        // Set next of tail to the new Node
        tail->next = newNode;
        
        // Set new Node as the new tail
        tail = newNode;
    }

  
    void printValues() {
        if (head == NULL) {
            return;
        } else {
            Node* current = head;
            while (current != NULL) {
                cout << current -> value << ' ';
                current = current -> next;
            }
            cout << '\n';
        }
    }
};