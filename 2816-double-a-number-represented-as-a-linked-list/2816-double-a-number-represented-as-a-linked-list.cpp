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
    ListNode* reverseLL(ListNode* &head){
        ListNode* pre=NULL,*next=NULL,*cur=head;
        
        while(cur){
            next = cur->next;
            cur->next=pre;
            pre = cur;
            cur = next;
        }
        
        return pre;
    }
    ListNode* doubleIt(ListNode* head) {
        
        ListNode* res = reverseLL(head);
        vector<int> ans;
        int carry = 0;
        int val = 0;
        ListNode* final = new ListNode(0);
        ListNode* newTemp = final;
        final->next = NULL;
        while(res!=NULL){
            val = res->val*2 + carry;
            if(val>=10){
                int a = val%10;
                carry = val/10;
                ListNode* temp = new ListNode(a);
                final->next = temp;
                final=temp;
                temp->next=NULL;
            }else{
                carry = 0;
                ListNode* temp = new ListNode(val);
                final->next = temp;
                final=temp;
                temp->next=NULL;
            }
            res = res->next;
        }
        if(carry!=0){
            ListNode* temp = new ListNode(carry);
            final->next = temp;
            final=temp;
            temp->next=NULL;
        }
        
        return reverseLL(newTemp->next);
    }
};