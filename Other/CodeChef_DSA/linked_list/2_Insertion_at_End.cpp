#include <iostream>
using namespace std;

class Node {
    public:
    int value;
    Node* next;
    
    // Constructor to initialize the node with a given value
    Node(int val): value(val), next(nullptr) {}
};

class LinkedList {
    public:
    Node* head;
    
    void insertAtEnd(int value) {
        Node* newNode = ___ ________;
        Node* current = head;
        
        // If there are no nodes in the linked list
        // Set the new node as head and return
        if (head == NULL) {
            head = newNode;
            return;
        }
        
        // Iterate to the end of list
        while (current -> next != NULL) {
            current = current -> next;
        }
        
        // Set the next of last value to the new Node
        current -> ____ = ______;
    }
    
    int getLastValue() {
        if (head == NULL) {
            return -1;
        } else {
            Node* current = head;
            while (current -> next != NULL) {
                current = current -> next;
            }
            return current -> value;
        }
    }
};

int main() {
    int n;
    cin >> n;
    
    LinkedList* list = new LinkedList();
    
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        list -> insertAtEnd(x);
        cout << list -> getLastValue() << ' ';
    }
}