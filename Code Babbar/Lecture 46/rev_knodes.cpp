Node *kReverse(Node *head, int k) {

  // Write your code here.
  int size = 0;
  Node *curr = head;
  while (curr) {
    curr = curr->next;
    size++;
  }
  if (size < k) {
    return head;
  }
  Node *prev = NULL;
  Node *next = head;
  curr = NULL;
  int count = 0;
  while (next && k > count) { 
    curr = next;
    next = curr->next;
    curr->next = prev;
    prev = curr;
    count++;
  }
  if (next) {
    head->next = kReverse(next, k);
  }
  return prev;
}