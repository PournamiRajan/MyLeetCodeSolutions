/**
Given a sorted linked list, delete all duplicates such that each element appear only once.

Example 1:

Input: 1->1->2
Output: 1->2
Example 2:

Input: 1->1->2->3->3
Output: 1->2->3
**/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummy = head, *store_head = head;
        if (!head)
            return NULL;
        while (head)
        {
            if (head->next && (head->val != head->next->val))
            {
                dummy->next = head->next;
                dummy = dummy->next;
            }
            head = head->next;
        }
        /* to handle corner case where all inputs are same */
        if (dummy->next)
            dummy->next = NULL;
        return store_head;
    }
};
