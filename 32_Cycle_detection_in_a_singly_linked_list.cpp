#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/
/*
bool detectCycle(Node *head)
{
	map<Node* , bool>visited;
    Node* ptr = head;
    while(ptr != NULL){
        if(visited[ptr] == true){
      return true;
        }
        visited[ptr] = true;
        ptr = ptr -> next;
    }
    return false;
}
*/
bool detectCycle(Node* head){
    if(head == NULL) return false;
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}
