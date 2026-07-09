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
//Optimal tortoise hare method
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast)
        {
           if (fast->next==nullptr) return slow;
            slow = slow->next;
            fast = fast->next->next;
            

        }
        return slow;



        
//brute method traversing whole LL and find length
        /*ListNode* temp = head;
        int len=0;
        if(head->next == nullptr) return head;

        while(temp)
        {
            len++;
            temp = temp->next;
        }

        int cnt =1;
        temp =head;
        while(cnt != len/2 +1)
        {
            cnt++;
            temp = temp->next;
        }
        return temp;*/

    }
};