/* Given a singly linked list of integers, sort it using 'Merge Sort.'
Sample Input 1 :
1
10 9 8 7 6 5 4 3 -1
Sample Output 1 :
 3 4 5 6 7 8 9 10  */

 Node *merge(Node *head1, Node *head2){
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
Node* locateMid(Node* head){
    if(head == NULL){
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
        while(fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
    }
   return slow;
}
Node *mergeSort(Node *head)
{
	//Write your code here
    if (head == NULL || head->next == NULL){
        return head;
    }
    
    Node *mid = locateMid(head);
    Node *a = mid->next;
    mid->next = NULL;
    Node *b = head;
    
    a = mergeSort(a);
    b = mergeSort(b);
    return merge(a,b);
    
}