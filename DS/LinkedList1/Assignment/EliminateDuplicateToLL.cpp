/* You have been given a singly linked list of integers where the elements are sorted in ascending order. 
Write a function that removes the consecutive duplicate 
values such that the given list only contains unique elements and returns the head to the updated list.
Sample Input 1 :
1
1 2 3 3 3 3 4 4 4 5 5 7 -1
Sample Output 1 :
1 2 3 4 5 7  */
Node *removeDuplicates(Node *head)
{
    if (head == NULL || head->next == NULL){
        return head;
    }
    
    Node *current = head;
    while (current -> next != NULL){
        Node *save = current->next;
        if (current->data == current->next->data){
            current->next = save->next;
        }
        else {
            current = current->next;
        }
    }
    return head;
}