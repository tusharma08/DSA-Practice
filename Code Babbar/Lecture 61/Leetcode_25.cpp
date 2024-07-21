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
class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (!head || k == 1)
            return head;

        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *prev = dummy;

        while (head)
        {
            ListNode *tail = prev;
            for (int i = 0; i < k; i++)
            {
                tail = tail->next;
                if (!tail)
                    return dummy->next;
            }

            ListNode *next = tail->next;
            tie(head, tail) = reverseList(head, tail);

            prev->next = head;
            tail->next = next;
            prev = tail;
            head = tail->next;
        }

        ListNode *result = dummy->next;
        delete dummy;
        return result;
    }

private:
    pair<ListNode *, ListNode *> reverseList(ListNode *head, ListNode *tail)
    {
        ListNode *prev = tail->next;
        ListNode *curr = head;
        while (prev != tail)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return {tail, head};
    }
};
