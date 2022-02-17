// For a given a singly linked list of integers and a position 'i', print the node data at the 'i-th' position.

void printIthNode(Node *head, int i)
{
    //Write your code here
    Node *temp = head;
    int length = 0;
    
    while (temp != NULL){
        if (length == i){
            cout << temp->data << endl;
        }
        length++;
        temp = temp->next;
    }
}