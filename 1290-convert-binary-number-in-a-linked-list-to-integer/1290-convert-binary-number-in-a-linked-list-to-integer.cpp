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
    int h(ListNode* head)
    {
        int ans=0;
        while(head)
        {
            head=head->next;
            ans++;
        }
        return ans;
    }
    int getDecimalValue(ListNode* head) {
        ListNode* curr=head;
        int ans=h(curr);
        //cout<<ans;
        //return ans;
        int res=0;
        ans=ans-1;
        while(curr)
        {
            int x=pow(2,ans);
            res+=(curr->val)*x;
            curr=curr->next;
            ans--;
        }
        return res;
        
    }
};