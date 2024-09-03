void insertAfterK(int value, int k) {

    Node* newNode = new Node(value);
    Node* current = head;
    
    // If there are no nodes in the linked list
    // Set the new node as head and return
    if (head == NULL) {
        head = newNode;
        return;
    }
    
    // Iterate to the k-th node
    for (int i = 1; i < k; i++) {
        current = current -> next;
    }
    
    // Set the next of new Node to next of current
    newNode->next = current->next;
    
    // Set the next of current to new Node
    current->next = newNode;
}