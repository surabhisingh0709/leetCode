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
    ListNode *detectCycle(ListNode *head) {
        ListNode* ans = nullptr;
        ListNode* temp = head;


        unordered_map<ListNode* , int> freq;
        while(temp)
        {
            if(freq.find(temp) != freq.end()) return temp;
            freq[temp]=1;
            temp = temp->next;
        }
        return temp;

    }
};