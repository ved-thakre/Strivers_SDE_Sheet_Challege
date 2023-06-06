Node *findMiddle(Node *head) {
    Node* slow = head;
    Node* fast = slow->next;
    while(fast!=NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;
}
