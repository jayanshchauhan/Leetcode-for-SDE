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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        while (temp&&temp->next)
        {
            if (temp->next->val==temp->val)
            {
                temp->next=temp->next->next;
                continue;
            }
            temp=temp->next;
        }
        return head;
    }
};
/*
ListNode* temp=head;
        while (temp&&temp->next)
        {
            if (temp->next->val==temp->val)
            {
                temp->next=temp->next->next;
                continue;
            }
            temp=temp->next;
        }
        return head;

        if(head==NULL  ||  head->next==NULL) return head;
        ListNode* first=head;
        ListNode* second=head;
        ListNode* ans=head;
        while(first){
            second = first;
            while(first->next!=NULL && first->next->val==first->val){
                first = first->next;
            }
            second->next = first->next;
            first = second;
            first = first->next;
        }
        return ans;
*/