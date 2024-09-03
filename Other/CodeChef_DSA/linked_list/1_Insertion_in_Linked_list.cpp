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
    
    void insertFront(int value) {
        cout << "Inserting " << value << '\n';
        
        // Step 1: Create a new Node
        Node* newNode = new Node(value);
        
        // Step 2: Set next of newNode to the current head
        newNode -> next = head;
        
        // Step 3: Set newNode as the head
        head = newNode;
    }
    
    int getHeadValue() {
        if (head == NULL) {
            return -1;
        } else {
            return head -> value;
        }
    }
};

int main() {
    LinkedList* list = new LinkedList();
    list -> insertFront(3);
    cout << "The value at the head is: " << list -> getHeadValue() << '\n';
    
    list -> insertFront(2);
    cout << "The value at the head is: " << list -> getHeadValue() << '\n';
    
}