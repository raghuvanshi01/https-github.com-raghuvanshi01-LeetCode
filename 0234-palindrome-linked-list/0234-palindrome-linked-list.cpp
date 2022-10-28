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
    //check recursive
    /*
    bool pal(ListNode* left,ListNode* right)
    {
        if(right==NULL)
        {
            return true;
        }
        bool first = pal(left,right->next);
        if(first==false)
        {
            return false;
        }
        bool second;
        if(left->val==right->val)
        {
            second=true;
            left=left->next;
        }
        else{
            second=false;
        }
        return second;
    }
    */
     ListNode* reverse(ListNode* head) {
        ListNode* pre=NULL;
        ListNode* next=NULL;
        while(head!=NULL){
            next=head->next;
            head->next=pre;
            pre=head;
            head=next;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        /*
        ListNode* curr = head;
        vector<int> v;
        while(curr)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        bool flag = true;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=v[v.size()-1-i]){
                return false;
            }
        }
        return true;
     
         return pal(head,head);
         */
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* dummy=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next = reverse(slow->next);
        slow=slow->next;
        while(slow)
        {
            if(dummy->val!=slow->val)
            {
                return false;
            }
            slow=slow->next;
            dummy=dummy->next;
        }
        return true;
        
        
        
    }
};