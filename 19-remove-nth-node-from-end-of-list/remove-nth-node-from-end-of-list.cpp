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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head->next== nullptr) 
        {
            return nullptr;
        }

        ListNode* temp = head;
        int len=0;
        while(temp)
        {
            len++;
            temp = temp->next;
        }

        int k = len-n+1;//position from start 

        if(k==1)
        {
           ListNode* temp = head;
           head = head->next;
           temp->next = nullptr;
            return head;
        }

        temp =head;
        int cnt=1;
        ListNode* back = nullptr;

        while(cnt<k)
        {
            back = temp;
            temp = temp->next;
            cnt++;
        }
        ListNode* front = temp->next;        
        temp->next = nullptr;
        back->next = front;
        delete temp;

        return head;

        
        
    }
};