/* Given a singly linked list of integers, reverse it iteratively and return the head to the modified list.
Sample Input 1 :
1
1 2 3 4 5 6 7 8 -1
Sample Output 1 :
8 7 6 5 4 3 2 1 */

Node *reverseLinkedList(Node *head) {
    // Write your code here
    if (head == NULL){
        return head;
    }
    
    Node *current = head;
    Node *prev = NULL;
    
    while (current != NULL){
        Node *sav = current->next;
        current->next = prev;
        prev = current;
        current = sav;
    }
    return prev;
}