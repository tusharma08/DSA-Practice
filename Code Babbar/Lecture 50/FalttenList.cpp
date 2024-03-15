/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next),
 *child(child) {}
 * };
 */

Node *merge(Node *left, Node *right) {
  Node *sum, *last;
  if (left->data <= right->data) {
    sum = last = left;
    left = left->child;
  } else {
    sum = last = right;
    right = right->child;
  }

  while (left && right) {
    if (left->data <= right->data) {
      last->child = left;
      last = left;
      left = left->child;
    } else {
      last->child = right;
      last = right;
      right = right->child;
    }
  }

  if (left)
    last->child = left;
  if (right)
    last->child = right;

  return sum;
}

Node *flattenLinkedList(Node *head) {

  Node *ans = head;
  Node *ptr = head->next;
  ans->next = NULL;
  while (ptr) {
    Node *tmp = ptr->next;
    ptr->next = NULL;
    ans = merge(ans, ptr);
    ptr = tmp;
  }
  return ans;
}
