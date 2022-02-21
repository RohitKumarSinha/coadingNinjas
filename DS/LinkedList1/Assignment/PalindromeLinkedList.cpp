/* You have been given a head to a singly linked list of integers. 
Write a function check to whether the list given is a 'Palindrome' or not.

Sample Input 1 :
1
9 2 3 3 2 9 -1
Sample Output 1 :
true */

bool isPalindrome(Node *head)
{
    //Write your code here
    if (head == NULL || head->next == NULL){
        return true;
    }
    
    Node *secondLast = head;
    while (secondLast->next->next != NULL){
        secondLast = secondLast->next;
    }
    
    Node* last = secondLast->next;
    if (last->data == head->data){
        secondLast->next = NULL;
        return isPalindrome(head->next);
    }
    else {
        return false;
    }
}