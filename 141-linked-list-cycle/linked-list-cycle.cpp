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
        if(head == nullptr) return false;

//Optimal tortoise hare
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=nullptr && fast->next != nullptr)
        {
            slow= slow->next;
            fast = fast->next->next;
            if(slow==fast) return true;
        }
        return false;

//Brute
        /*unordered_map<ListNode* , int> freq;
        ListNode* temp = head;
        while(temp)
        {
            if(head->next==nullptr || head ==nullptr) return false;
            if(freq.find(temp) == freq.end())//not exists
            {
                freq[temp]=1;
            }
            else return true;
            temp = temp->next;
        }
        return false;*/
        
    }
};