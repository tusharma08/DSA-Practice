#include <bits/stdc++.h>
/*************************************************
        Following is the structure of class Node:

        class Node{
        public:
            int data;
            Node* next;

            Node(int data){
                this->data = data;
                this->next = NULL;
            }

        }
**************************************************/

bool isCircular(Node *head) {
    //floyd's cycle Algo
  if (head == NULL)
    return true;
  if (head->next == NULL)
    return (false);
  Node *slow = head;
  Node *fast = head;
  while (slow != NULL && fast != NULL) {
    slow = slow->next;
    fast = fast->next;
    if (fast != NULL)
      fast = fast->next;
    if (slow == fast) {
      if (slow == head)
        return true;
      else
        return false;
    }
  }
  return false;
}
