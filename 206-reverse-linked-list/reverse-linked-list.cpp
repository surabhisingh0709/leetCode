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
    ListNode* reverseList(ListNode* head) {
//better
        ListNode* prev = nullptr;
        ListNode* temp = head;
        if(head==nullptr|| head->next ==nullptr) return head;

        while(temp)
        {
            ListNode* front = temp->next;
            temp->next=prev;
            prev = temp;
            temp = front;
        }
        head = prev;
        return head;




//brute using stack
        /*ListNode* temp = head;
        stack<int> st;

        while(temp)
        {
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;

        while(temp)
        {
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }
        return head;*/
        
    }
};