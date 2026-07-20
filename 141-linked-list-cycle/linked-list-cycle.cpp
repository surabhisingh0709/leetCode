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

        unordered_map<ListNode* , int> freq;
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
        return false;
        
    }
};