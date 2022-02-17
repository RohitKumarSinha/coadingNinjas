/* You have been given a linked list of integers. 
Your task is to write a function that inserts a node at a given position, 'pos'. */

Node* insertNode(Node *head, int i, int data) {
	// Write your code here
    if (head == NULL) {
        return head;
    }
    
    else if (i == 0){
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }
    
    else {
        Node *newHead = insertNode(head->next, i-1, data);
        head->next = newHead;
        return head;
    }
}