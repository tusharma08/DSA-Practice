/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    void reverse(ListNode *&head, ListNode *curr, ListNode *prev) {
        if(curr == NULL) {
            head = prev;
            return head;
        }
        ListNode *forw = curr->next;
        reverse (head,forw,curr);
        curr->next  = prev;
    }

public:
    ListNode* reverseList(ListNode* head) {
        //recursive Approach
        ListNode *prev = NULL;
        ListNode *curr = head;
        reverse(head, curr, prev);
        return head;

        //Normal Approach
        // ListNode *prev = NULL;
        // ListNode *curr = head;
        // ListNode *forw = NULL;
        // while(curr != NULL) {
        //     forw = curr->next;
        //     curr-> next = prev;
        //     prev = curr;
        //     curr = forw;
        // }
        // return prev;
    }
};