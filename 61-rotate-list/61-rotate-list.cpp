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
    int f(ListNode* head)
    {
       int ans=0;
        while(head)
        {
            head=head->next;
            ans++;
        }
        return ans;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* curr=head; 
        int n=f(head);
        if(n==0)
        {
            return head;
        }
        k=k%n;
        k=n-k-1;
        if(head==NULL || n==1 ||n==k || n==0)return head;
         while(k-- && curr->next)
         {
             curr=curr->next;
         }
        ListNode* next=curr->next;
        curr->next=NULL;
        ListNode* ans=next;
        if(next==NULL)
        {
            return head;
        }
        while(next->next!=NULL)
        {
            next=next->next;
        }
        next->next=head;
        return ans;
    }
};