/* You have been given two sorted(in ascending order) singly linked lists of integers.
Write a function to merge them in such a way that the resulting singly linked list is 
also sorted(in ascending order) and return the new head to the list.

Sample Input 1 :
1
2 5 8 12 -1
3 6 9 -1
Sample Output 1 :
2 3 5 6 8 9 12  */

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    if(head1 == NULL && head2 == NULL){
        return NULL;
    }
    else if(head1 != NULL && head2 != NULL){
        Node* newHead = NULL;
        Node* newTail = NULL;
        
        while(head1 != NULL && head2 != NULL){
        	Node* newNode = NULL;
            if(head1 -> data < head2->data){
                newNode = head1;
            	head1 = head1 -> next;
            }
            else{
                newNode = head2;
            	head2 = head2 -> next;
            }
            if(newHead == NULL){
                newHead = newNode;
                newTail = newNode;
            }
            else{
                newTail -> next = newNode;
                newTail = newNode;
            }
        }
        if(head1 == NULL){
            newTail -> next = head2;
        }
        else{
            newTail -> next = head1;
        }
        return newHead;
    }
    else{
        if(head1 == NULL){
            return head2;
        }
        else{
            return head1;
        }
    }
}
