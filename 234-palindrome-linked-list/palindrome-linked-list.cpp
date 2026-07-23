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
    ListNode* reverse(ListNode*temp)
    {
        if(temp==nullptr || temp->next ==nullptr)return temp;
        ListNode*prev=nullptr;
        ListNode*front = temp;
        while(temp)
        {
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;         
        }
        return prev;
    }

public:
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next ==nullptr) return true;//this are always palindrome

    //OPTIMAL
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast->next!=nullptr && fast->next->next!=nullptr)
        {
            slow=slow->next;
            fast= fast->next->next;
        }
        slow->next=reverse(slow->next);

        ListNode*first=head;
        ListNode*second=slow->next;

        while(second)
        {
            if(first->val != second->val)return false;
            first= first->next;
            second= second->next;
        }
        return true;

    //BRUTE USING STACK
        /*stack<int>st;
        ListNode*temp=head;

        while(temp)
        {
            st.push(temp->val);
            temp = temp->next;
        }

        temp = head;
        while(temp)
        {
            if(temp->val != st.top())  return false;
            st.pop();
            temp= temp->next;
        }
        return true;*/
        
        
    }
};