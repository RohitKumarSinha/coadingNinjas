/************************************************************

    Following is the structure of the node class

    class Node {
      public :
      int data;
      Node *next;

      Node(int data) {
          this->data = data;
          next = NULL;
      }
  };

**************************************************************/

class Queue
{
  // Define the data members
  int size;
  Node *head;
  Node *tail;

public:
  Queue()
  {
    // Implement the Constructor
    size = 0;
    head = NULL;
    tail = NULL;
  }

  /*----------------- Public Functions of Stack -----------------*/

  int getSize()
  {
    // Implement the getSize() function
    return size;
  }

  bool isEmpty()
  {
    // Implement the isEmpty() function
    return size == 0;
  }

  void enqueue(int data)
  {
    // Implement the enqueue() function
    Node *newNode = new Node(data);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
    size++;
  }

  int dequeue()
  {
    // Implement the dequeue() function
    if (isEmpty())
    {
      return -1;
    }
    int data = head->data;
    Node *temp = head;
    head = head->next;
    delete temp;
    size--;
    return data;
  }

  int front()
  {
    // Implement the front() function
    if (isEmpty())
    {
      return -1;
    }
    else
    {
      return head->data;
    }
  }
};