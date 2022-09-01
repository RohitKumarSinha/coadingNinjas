
/*********************************************************

    // Following is the node structure

    class Node {
    public:
        int data;
        Node * next;
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

        ~Node() {
            if(next) {
                delete next;
            }
        }
    };

*********************************************************/

void deleteAlternateNodes(Node *head)
{
  // Write your code here
  if (head == NULL)
  {
    return;
  }

  Node *prev = head;
  Node *temp = head;

  int count = 0;
  while (temp != NULL)
  {
    if (count % 2 != 0)
    {
      Node *save = temp->next;
      prev->next = save;
      free(temp);
      temp = save;
      prev = save;
      count++;
    }
    else
    {
      temp = temp->next;
      count++;
    }
  }
}