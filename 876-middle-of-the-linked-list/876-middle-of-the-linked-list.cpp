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
    /*
    int heightll(ListNode* head){
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    */
    ListNode* middleNode(ListNode* head) {
        /*
        ListNode* temp1=head;
        int a= heightll(head);
        if(a%2!=0){
            a=a+1;
        }
        else{
            a=a+2;
        }
        int count1=1;
        while(count1!=a/2){
            temp1=temp1->next;
            count1++;
        }
        return temp1;
        
        */
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                break;
            }
        }
        return slow;
    }
};