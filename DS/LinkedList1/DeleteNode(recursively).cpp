/* Given a singly linked list of integers and position 'i', 
delete the node present at the 'i-th' position in the linked list recursively. */
Node *deleteNodeRec(Node *head, int pos) {
	//Write your code here
    if (head == NULL) {
        return head;
    }
    else if (pos == 0){
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    else {
       Node *smallhead = deleteNodeRec(head->next, pos-1);
        head->next = smallhead;
        return head;
    }
}