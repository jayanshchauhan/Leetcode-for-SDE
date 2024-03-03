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
    void reorderList(ListNode* head) {
        if(!head || !head->next) {
            return;
        }
        deque<ListNode*>q;
        ListNode* temp = head;
        while(temp) {
            q.push_back(temp);
            temp = temp->next;
        }
        temp = head;
        int i = 0;
        while(!q.empty()) {
            ListNode* t = NULL;
            if(i % 2 ==0 ) {
                t = q.front();
                q.pop_front();
            }
            else {
                t = q.back();
                q.pop_back();
            }
            t->next= NULL;
            temp->next = t;
            temp = t;
            i++;
        }
    }
};