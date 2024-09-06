
void deleteNode(int value) {
    
    if (head -> value == value) {
        Node* targetNode = head;
        head = head -> next;
        delete targetNode;
    } else {
        Node* iter = head;
        
        // Traverse the list
        // When next element is our target element, eliminate it
        while (iter -> next != NULL) {
            if (iter -> next -> value == value) {
                // Set next of iter
                // To next to next of iter
                iter->next = iter->next->next;
                
                
                break;
            }
            iter = iter -> next;
        }
    }
}