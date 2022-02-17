// Given a linked list, find and return the length of the given linked list recursively.

int length(Node *head) {
    // Write your code here
   if (head == NULL){
       return 0;
   }
    
    return 1 + length(head->next);
}