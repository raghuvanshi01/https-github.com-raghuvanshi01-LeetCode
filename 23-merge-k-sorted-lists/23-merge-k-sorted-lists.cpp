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
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL)
        {
            return list1;
        }
        ListNode* res=list1;
        if(list1->val > list2->val)
        {
            res=list2;
            list2=list2->next;
        }
        else{
            list1=list1->next;
        }
        ListNode* curr=res;
        while(list1 && list2)
        {
            if(list1->val < list2->val){
                curr->next=list1;
                list1=list1->next;
            }
            else{
                curr->next=list2;
                list2=list2->next;
            }
            curr=curr->next;
        }
        if(list1){
            curr->next=list1;
        }
        if(list2)
        {
            curr->next=list2;
        }
        return res;   
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
        {
            return NULL;
        }
        ListNode* head=lists[0];
        for(int i=1;i<lists.size();i++)
        {
            head = mergeTwoLists(head,lists[i]);
        }
        return head;
    }
};