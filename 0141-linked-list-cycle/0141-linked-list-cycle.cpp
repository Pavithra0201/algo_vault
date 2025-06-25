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
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL)//ensuring loop
        {
            slow=slow->next;//moves by 1 node
            fast=fast->next->next;//moves by 2 node

            if (slow==fast)//meets at a point if there is a loop
                return true;
        }

        return false;
    }
};