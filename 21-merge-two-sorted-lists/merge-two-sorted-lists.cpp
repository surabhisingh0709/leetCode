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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//Optimal
    
    if(list1==nullptr && list2 ==nullptr) return list1;
    if(list1!= nullptr && list2 ==nullptr) return list1;
    if(list2!= nullptr && list1 ==nullptr) return list2;

    if(list1->val >list2->val)swap(list1,list2);
    ListNode* res = list1;

    while(list1!=nullptr && list2!=nullptr)
    {
        ListNode* temp = nullptr;
        while(list1!=nullptr && list1->val <= list2 ->val)
        {
            temp =list1;
            list1 = list1->next;
        }
        temp->next = list2;
        swap(list1 , list2);
    }
    return res;

//Brute
   /* ListNode* temp1 = list1;
    ListNode* temp2 = list2;

    if(list1==nullptr && list2 ==nullptr) return list1;
    if(list1!= nullptr && list2 ==nullptr) return list1;
    if(list2!= nullptr && list1 ==nullptr) return list2;

    int ans;

    if(list1->val <= list2->val)
    {
        ans = list1->val;
        temp1 = temp1->next;    
    }
    else 
    {
        ans = list2->val;
        temp2 = temp2->next;
    }
    ListNode* head = new ListNode(ans); 
    ListNode* tail = head;

    while(temp1 && temp2)
    {
        if(temp1->val <= temp2->val)
        {
            ans = temp1->val;
            temp1 = temp1->next;   
        }
        else
        {
            ans = temp2->val;
            temp2 = temp2->next;   
        }
        ListNode*x = new ListNode(ans); 
        tail->next = x;
        tail =tail->next;     
    }

    if(temp1)
    {
        while(temp1)
        {
            
            ListNode* x = new ListNode(temp1->val);  
            temp1 = temp1->next;   
            tail->next = x;
            tail =tail->next;   
            
        }
    }

    if(temp2)
    {
        while(temp2)
        {
            ListNode* x = new ListNode(temp2->val);  
            temp2= temp2->next;   
            tail->next = x;
            tail =tail->next;   
        }
    }

    return head;*/

        
    }
};