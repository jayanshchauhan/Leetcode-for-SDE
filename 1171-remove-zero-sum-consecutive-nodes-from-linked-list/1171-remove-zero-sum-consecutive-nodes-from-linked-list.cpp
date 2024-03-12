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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* first = head;
        unordered_map<int,ListNode*> um;
        int ps = 0;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        um[0] = dummy;
        
        while(first != NULL){
            ps+=first->val;
            if(um.find(ps) != um.end()){
                ListNode* temp = um[ps];
                ListNode* temp2 = um[ps];
                int pst = ps;
                while(temp!=first){
                    temp = temp->next;
                    pst+=temp->val;
                    if(temp!=first){
                        um.erase(pst);
                    }
                    
                }
                temp2->next = first->next;
            }else{
                um[ps] = first;
            }
            first = first->next;
        }
        return dummy->next;
    }
};