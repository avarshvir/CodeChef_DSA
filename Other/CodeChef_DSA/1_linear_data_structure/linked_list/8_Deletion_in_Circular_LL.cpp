
void deleteNode(int value) {
    // If there is only one element and it is the value to be deleted, remove it
    if (head == tail && head -> value == value) {
        head = NULL;
        tail = NULL;
        return;
    }
    
    // if the target is at head set head to second element and set tail's next to the new head
    Node* iter = head;
    if (head -> value == value){
        head = head -> next;
        tail -> next = head;
        return;
    }
    
    // Now iterate over the linked list till you reach the tail and check if the next node is target
    while (iter -> next != NULL && iter != tail){
        if (iter -> next -> value == value)
        {
            // If we found the value
            // Set current node's next to the next of the next node
            iter->next = iter->next -> next;
            // And break
            break;
        }
        iter = iter -> next;
    }
}
