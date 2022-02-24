/* You have been given a singly linked list of integers. Write a function that returns the index/position of integer data
denoted by 'N' (if it exists). Return -1 otherwise.
Sample Input 1 :
2
3 4 5 2 6 1 9 -1
5
10 20 30 40 50 60 70 -1
6
Sample Output 1 :
2
-1 */



int findNode(Node *head, int n){
    // Write your code here.
    Node *temp = head;
    int count = 0;
    while (temp != NULL){
        if (temp->data == n){
           return count;
        }
        count++;
        temp = temp->next;
    }
    return -1;
}