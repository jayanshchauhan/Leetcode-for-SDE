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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       ListNode* prevv = NULL;
       ListNode* nex = NULL;
       ListNode* first = head;
       ListNode* preFirst = NULL;
       ListNode* newRight = NULL;
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* prev = dummy;
        for (int i = 0; i < left-1; i++) {
            prev = prev->next;
        }
        ListNode* cur = prev->next;

        newRight = cur;
        int i=0;
        for(int i = left; i <= right; i++){
            nex = cur->next;
            cur->next = prevv;
            prevv = cur;
            cur = nex;
        }
        prev->next = prevv;
        newRight->next = nex;
        return dummy->next;
    }
};