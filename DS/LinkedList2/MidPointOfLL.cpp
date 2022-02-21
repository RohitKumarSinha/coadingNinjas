/* For a given singly linked list of integers, find and return the node present at the middle of the list.
Sample Input 1 :
1
1 2 3 4 5 -1
Sample Output 1 :
3
Sample Input 2 :
2 
-1
1 2 3 4 -1
Sample Output 2 :
2 */

Node *midPoint(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    int lengthOfLL = 0;
    Node *temp = head;
    while (temp != NULL){
        temp = temp->next;
        lengthOfLL++;
    }
    Node* slow = head;
    Node* fast = head;
    if(lengthOfLL % 2 == 0){
        while(fast -> next -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
    }
    else{
        while(fast->next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
    }
    return slow;
}
