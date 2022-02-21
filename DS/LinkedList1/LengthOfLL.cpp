// For a given singly linked list of integers, find and return its length. Do it using an iterative method.
int length(Node *head)
{
    //Write your code here
    int length = 0;
    Node *temp = head;
    while (temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}