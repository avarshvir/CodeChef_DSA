void deleteNode(int value) {
    Node* targetNode = head;
    while (targetNode -> value != value) {
        targetNode = targetNode -> next;
    }
    
    // Update A and B
    Node* A = targetNode -> prev;
    Node* B = targetNode -> next;
    
    // A could be null if target is head
    if (A != NULL) {
        A -> next = B;
    }
    
    // B could be null if target is tail
    if (B != NULL) {
        B -> prev = A;
    }
    
    if (targetNode == head) {
        head = B;
    }
}
