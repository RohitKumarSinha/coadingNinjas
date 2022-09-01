/**********
 * Following is the Node class that is already written.

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

*********/
Node *reverseLinkedList(Node *head)
{
  if (head == NULL)
  {
    return head;
  }
  Node *current = head;
  Node *prev = NULL;
  while (current != NULL)
  {
    Node *sav = current->next;
    current->next = prev;
    prev = current;
    current = sav;
  }
  return prev;
}

Node *NextLargeNumber(Node *head)
{
  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input is handled automatically.
   */

  head = reverseLinkedList(head);
  int carry = 1;
  int prevElement = 0;
  Node *current = head;
  Node *prev = NULL;
  while (current != NULL)
  {
    Node *sav = current->next;
    if (carry == 1)
    {
      current->data = (current->data + carry) % 10;
      if (current->data == 0)
      {
        carry = 1;
      }
      else
        carry = 0;
    }
    prevElement = current->data;
    current->next = prev;
    prev = current;
    current = sav;
  }
  head = prev;
  if (head->data == 0 && carry == 1)
  {
    Node *newNode = new Node(carry);
    newNode->next = head;
    head = newNode;
  }
  return head;
}
