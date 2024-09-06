#include <iostream>
using namespace std;

class Node {
    public:
    int value;
    Node* next;
    Node* prev;
    
    // Constructor to initialize the node with a given value
    Node(int val): value(val), next(nullptr), prev(nullptr) {}
};

class LinkedList {
    public:
    Node* head;
    Node* tail;

    void insertAtIndex(int index, int value) {
        Node* newNode = new Node(value);
        
        if (index == 0) {
            // To insert at head, make this new node the head
            newNode -> next = head;
            if (head != NULL) {
                head -> prev = newNode;
            }
            head = newNode;
        } else {
            // To insert at any other position
            // Find the nodes between which we want to insert
            // By traversing from head to index - 1 position
            Node *iter = head;
            for (int i = 0; i < index - 1; i++) {
                iter = iter -> next;
            }
            
            Node *A = iter;
            Node *B = iter -> next;
            
            // Update pointers to insert newNode between A and B
            A -> next = newNode;
            if (B != NULL) {
                B -> prev = newNode;
            }
            
            // Update pointers of newNode
            newNode -> next = B;
            newNode -> prev = A;
        }
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

int main() {
    int n;
    cin >> n;
    
    LinkedList* list = new LinkedList();
    
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        list -> insertAtIndex(i, a);
    }
    
    list -> printValues();
}
#include <iostream>
using namespace std;

class Node {
    public:
    int value;
    Node* next;
    Node* prev;
    
    // Constructor to initialize the node with a given value
    Node(int val): value(val), next(nullptr), prev(nullptr) {}
};

class LinkedList {
    public:
    Node* head;
    Node* tail;

    void insertAtIndex(int index, int value) {
        Node* newNode = new Node(value);
        
        if (index == 0) {
            // To insert at head, make this new node the head
            newNode -> next = head;
            if (head != NULL) {
                head -> prev = newNode;
            }
            head = newNode;
        } else {
            // To insert at any other position
            // Find the nodes between which we want to insert
            // By traversing from head to index - 1 position
            Node *iter = head;
            for (int i = 0; i < index - 1; i++) {
                iter = iter -> next;
            }
            
            Node *A = iter;
            Node *B = iter -> next;
            
            // Update pointers to insert newNode between A and B
            A -> next = newNode;
            if (B != NULL) {
                B -> prev = newNode;
            }
            
            // Update pointers of newNode
            newNode -> next = B;
            newNode -> prev = A;
        }
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

int main() {
    int n;
    cin >> n;
    
    LinkedList* list = new LinkedList();
    
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        list -> insertAtIndex(i, a);
    }
    
    list -> printValues();
}
