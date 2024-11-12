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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>answer;
        ListNode* temp = head;

        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        
        while(temp != NULL && temp->next != NULL)
        {
            answer.push_back(temp->val);
            temp = temp->next->next;
        }
        if(temp)
        {
            answer.push_back(temp->val);
        }

        temp = head->next;
         while(temp != NULL && temp->next != NULL)
        {
            answer.push_back(temp->val);
            temp = temp->next->next;
        }
        if(temp)
        {
            answer.push_back(temp->val);
        }

        temp = head;
        int i=0;
        while(temp != NULL)
        {
            temp->val = answer[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
};