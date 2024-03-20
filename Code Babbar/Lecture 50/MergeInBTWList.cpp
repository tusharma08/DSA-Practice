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
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *temp = list1;
        ListNode *anext = list1;
        ListNode *bnext = list1;
        int count = 1;
        while (temp)
        {
            if (count == a)
            {
                anext = temp;
            }
            temp = temp->next;
            if (count == b)
            {
                bnext = temp;
            }
            count++;
        }
        anext->next = list2;
        ListNode *temp2 = list2;
        while (temp2->next)
        {
            temp2 = temp2->next;
        }
        temp2->next = bnext->next;
        bnext = NULL;
        return list1;
    }
};