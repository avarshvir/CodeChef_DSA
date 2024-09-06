
void deleteNode(int value) {
    
    if (head -> value == value) {
        Node* targetNode = head;
        
        // Set head to the next of targetNode
        head = targetNode->next;
        
        // Delete the target node
        delete targetNode;
    }
}