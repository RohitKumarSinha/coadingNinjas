/* You have been given a singly linked list of integers along with an integer 'N'. Write a function
to append the last 'N' nodes towards the front of the singly linked list and returns the new head to the list.
Sample Input 1 :
2
1 2 3 4 5 -1
3
10 20 30 40 50 60 -1
5
Sample Output 1 :
3 4 5 1 2
20 30 40 50 60 10 */

int length(Node* head){
    int l = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp -> next;
        l++;
    }
    return l;
}

Node* findLast(Node* head){
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    return temp;
}

Node *appendLastNToFirst(Node *head, int n){
    if(head == NULL || n == 0) return head;
    int l = length(head);
    int numRotate = l - n, count = 1;
    Node* temp = head;
    Node* last = findLast(head);
    while(count!=numRotate){
        temp = temp -> next;
        count++;
    }
	Node* head2 = temp -> next;
    temp -> next = NULL;
    last -> next = head;
    return head2;
}
