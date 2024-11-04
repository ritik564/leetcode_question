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
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        ListNode* fast = head;
        ListNode* slow = head;

        while(temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        
        if(count % 2 == 0)
        {
            while(fast->next != NULL && fast->next->next != NULL)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
            return slow->next;
        }
        else
        {
            while(fast->next != NULL && fast->next->next != NULL)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
            return slow;
        }
    }
};