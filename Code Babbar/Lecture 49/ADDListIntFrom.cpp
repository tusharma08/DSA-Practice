/*
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
}; 
*/

class Solution
{
    public:
    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* forw = NULL;
        while (curr) {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }
    Node *add(Node *head1,Node *head2) {
        int carry = 0;
        Node* ans = NULL;
        Node* curr = NULL;
         while (head1 != NULL || head2 != NULL || carry != 0) {
            int sum = carry;
            if (head1 != NULL) {
                sum += head1->data;
                head1 = head1->next;
            }
            if (head2 != NULL) {
                sum += head2->data;
                head2 = head2->next;
            }
            carry = sum / 10;
            sum %= 10;
            if (ans == NULL) {
                ans = new Node(sum);
                curr = ans;
            } else {
                curr->next = new Node(sum);
                curr = curr->next;
            }
        }
        return ans;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node *head1 = reverseList(first);
        Node *head2 = reverseList(second);
        Node *ans = add(head1,head2);
        return reverseList(ans);
    }
};