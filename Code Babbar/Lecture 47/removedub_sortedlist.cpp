/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *removeDuplicates(Node *head) {
  if (head == NULL)
    return head;

  Node *curr = head;
  while (curr->next != NULL) {
    if (curr->data == curr->next->data) {
      Node *nextNext = curr->next->next;
      delete curr->next;
      curr->next = nextNext;
      if (nextNext != NULL)
        nextNext->prev = curr;
    } else {
      curr = curr->next;
    }
  }
  return head;
}