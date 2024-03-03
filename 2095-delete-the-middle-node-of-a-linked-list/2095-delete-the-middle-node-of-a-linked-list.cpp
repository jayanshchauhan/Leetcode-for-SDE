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
        ListNode* temp=head,*cur=head,*slow=head,*fast=head;
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        int target = count/2;
        target--;
        while(target--){
            cur = cur->next;
        }
        if(cur!=NULL && cur->next!=NULL){
            if(cur->next->next !=NULL){
                cur->next=cur->next->next;
            }else{
                cur->next = NULL;
            }
        }
        return head;
        
    }
};