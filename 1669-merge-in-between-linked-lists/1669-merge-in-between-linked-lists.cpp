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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        vector<int> v;
        int count = 0;
        ListNode* target1 = NULL,*target2 = NULL,*res = list1;
        int last = b-a+1;
        while(list1 != NULL && a--){
            target1 = list1;
            list1 = list1->next;
        }
        target2 = target1;
        while(last-- && target2 != NULL){
            target2 = target2->next;
        }
        target1->next = list2;
        while(list2!=NULL && list2->next!=NULL){
            list2 = list2->next;
        }
        if(target2 != NULL){
         list2->next = target2->next;
        }
        return res;
    }
};