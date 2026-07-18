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
    ListNode* deleteNode(ListNode*head,ListNode*prev)
    {   
        ListNode* temp = prev->next;
        prev->next = prev->next->next;
        temp->next=nullptr;
        delete temp;
        return head;
    }
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* temp =head;
        while(temp && temp->next)
        {
            if(temp->val == temp->next->val)
            {
                deleteNode(head,temp);
            }
            else temp = temp->next;
        }
        return head;
    }
};