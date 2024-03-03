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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp,*cur;
        temp = head;
        cur = head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        int target = count - n;
        if(target == 0){
            head = head->next;
            return head;
        }
        while(cur!=NULL && target > 1){
            target--;
            cur = cur->next;
        }
        
        if(cur!=NULL && cur->next!=NULL){
            if(cur->next->next!=NULL){
                cur->next = cur->next->next;
            }else{
                cur->next = NULL;
            }
        }else{
            return NULL;
        }
        return head;
    }
};