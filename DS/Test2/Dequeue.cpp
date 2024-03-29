/**********

 Following is the main function we are using internally.
 Refer this for completing the Dequeue class.


 int main()
 {
 Deque dq(10);
 int choice,input;
 while(true) {
 cin >> choice;
 switch (choice) {
 case 1:
 cin >> input;
 dq.insertfront(input);
 break;
 case 2:
 cin >> input;
 dq.insertrear(input);
 break;
 case 3:
 dq.deletefront();
 break;
 case 4:
 dq.deleterear();
 break;
 case 5:
 cout << dq.getFront() << "\n";
 break;
 case 6:
 cout << dq.getRear() << "\n";
 break;
 default:
 return 0;
 }
 }

 return 0;
 }

 ************/

class Deque
{
  // Complete this class
  int arr[10];
  int front;
  int rear;
  int size;
  pubic : Deque(int size)
  {
    front = -1;
    rear = 0;
    this->size = size;
  }
  // checks whether deque is full or not
  bool isFull()
  {
    // used % operator is insertion and deletion is in circular manner
    return (front == (rear + 1) % size)
  }

  // checks whether deque is empty or not
  bool isEmpty()
  {
    return (front == -1);
  }

  // inserts an element at front
  void insertFront(int input)
  {
    if (isFull())
    {
      cout << "-1\n";
      return;
    }

    if (isEmpty())
    {
      front = 0;
      rear = 0;
    }
    else
    {
      // used % operator is insertion is in circular manner
      front = ((front - 1) % size + size) % size;
    }
    arr[front] = input;
  }

  // function to insert element at rear end of deque
  void insertRear(int input)
  {
    if (isFull())
    {
      cout << "-1\n";
      return;
    }
    if (isEmpty())
    {
      front = 0;
      rear = 0;
    }
    else
    {
      // used % operator is insertion is in circular manner
      rear = (rear + 1) % size;
    }
    arr[rear] = input;
  }

  // Deletes element at front end of deque
  void deleteFront()
  {
    if (isEmpty())
    {
      cout << "-1\n";
      return;
    }

    if (front == rear)
    {
      front = -1;
      rear = -1;
    }
    else
    {
      // used % operator is deletion is in circular manner
      front = (front + 1) % size;
    }
  }

  // Delete element at rear end of Deque
  void deleteRear()
  {
    if (isEmpty())
    {
      cout << "-1\n";
      return;
    }
    if (front == rear)
    {
      front = -1;
      rear = -1;
    }
    else
    {
      // used % operator is deletion is in circular manner
      rear = ((rear - 1) % size + size) % size;
    }
  }

  // returns front element of Deque
  int getFront()
  {
    if (isEmpty())
    {
      return -1;
    }
    return arr[front];
  }

  // function return rear element of Deque
  int getRear()
  {
    if (isEmpty())
    {
      return -1;
    }
    return arr[rear];
  }
};
