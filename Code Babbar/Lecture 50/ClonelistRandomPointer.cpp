/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/   

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL)
            return NULL;

        Node* current = head;
        while (current != NULL) {
            Node* temp = new Node(current->val);
            temp->next = current->next;
            current->next = temp;
            current = temp->next;
        }

        current = head;
        while (current != NULL) {
            if (current->random != NULL)
                current->next->random = current->random->next;
            current = current->next->next;
        }

        Node* original = head;
        Node* copyHead = head->next;
        Node* copy = copyHead;
        while (original != NULL) {
            original->next = original->next->next;
            if (copy->next != NULL)
                copy->next = copy->next->next;
            original = original->next;
            copy = copy->next;
        }
        return copyHead;
    }
};