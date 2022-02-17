/* You have been given a linked list of integers. 
Your task is to write a function that deletes a node from a given position, 'POS'. */

Node *deleteNode(Node *head, int pos)
{
   if(head == NULL){
        return head;
    }
    else if(pos == 0){
        Node *a = head;
        head = head->next;
        delete a;
        return head;
    }
    else{
        int count = 0;
        Node* temp = head;
        while(temp != NULL && count < pos-1){
            temp = temp -> next;
            count++;
        }
        if(temp != NULL && temp -> next != NULL){
            Node* target = temp -> next;
            temp -> next = target -> next;
            target -> next = NULL;
            delete target;
        }

        return head;
    }
    
}