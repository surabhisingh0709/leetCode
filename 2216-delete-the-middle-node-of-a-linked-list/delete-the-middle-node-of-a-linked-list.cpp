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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == nullptr) return nullptr;

        //BRUTE
        ListNode* temp = head;
        int len=0;
        while(temp)
        {
            len++;
            temp = temp->next;
        }

        int mid=len/2;

        temp=head;
        ListNode*del=nullptr;

        for(int i =1 ; i<mid ; i++)
        {
            temp = temp->next;
        }

        del=temp->next;
        temp->next=del->next;
        delete del;
        return head;

        
    }
};