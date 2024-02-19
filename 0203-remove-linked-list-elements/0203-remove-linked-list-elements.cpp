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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head == NULL) return head;
        if(head->val == val && head->next == NULL){
            return NULL;
        }
        while(head != NULL && head->val==val){
            head = head->next;
        }
        ListNode* curr = head;
        
        while(curr != NULL && curr->next != NULL){
            if(curr->next->val == val){
                curr->next = curr->next->next;
            }
            // After doing the above step, I am not updating "curr" because of these type of test cases:
				// 1->2->3->6->6->6->5->null  val = 6
            else{
                curr = curr->next;
            }
        }
        return head;
    }
};