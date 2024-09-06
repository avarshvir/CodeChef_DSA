// class Node {
//     public:
//     int value;
//     Node* next;
    
//     Node(int val): value(val), next(nullptr) {}
// };

void insertAtEnd(int value) {
    Node* newNode = new Node(value);
    
    if (head == NULL) {
        // Set head as new node
        head = newNode;
        
    } else {
        // Set next of tail to new Node
        tail->next = newNode;
    }
    
    // Set tail as new Node
    tail = newNode;
    
    // Set next of tail to head
    tail->next = head;
}