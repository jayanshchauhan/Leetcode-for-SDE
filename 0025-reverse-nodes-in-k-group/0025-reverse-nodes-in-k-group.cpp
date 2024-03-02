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
    void reverseLL(ListNode* temp){
        ListNode* cur = temp;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        while(cur!=NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
    }
    
    ListNode* getKthNode(ListNode* temp,int k){
        k--;
        while(temp!=NULL && k>0){
            temp = temp->next;
            k--;
        }
        return temp;
    }
    
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = NULL;
        
        while(temp!=NULL){
            ListNode* kNode = getKthNode(temp,k);
            if(kNode == NULL){
                if(prevLast){
                    prevLast->next = temp;
                }
                break;
            }
            
            ListNode* next = kNode->next;
            kNode->next = NULL;
            reverseLL(temp);
            if(temp == head){
                head = kNode;
            }else{
                prevLast->next = kNode;
            }
            prevLast = temp;
            temp = next;
        }
        return head;
    }
};