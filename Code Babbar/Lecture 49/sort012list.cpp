/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *sortList(Node *head) {
  // Write your code here.
  int zero = 0;
  int one = 0;
  int two = 0;
  Node *temp = head;
  while (temp != NULL) {
    if (temp->data == 0)
      zero++;
    else if (temp->data == 1)
      one++;
    else
      two++;

    temp = temp->next;
  }
  temp = head;
  while(temp != NULL) {
      if(zero) {
          temp->data = 0;
          zero--;
      }
      else if (one) {
          temp->data = 1;
          one--;
      }
      else {
          temp->data = 2;
          two--;
      }
      temp = temp->next;
  }
  return head;
}