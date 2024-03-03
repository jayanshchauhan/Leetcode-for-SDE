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
/*class Solution {
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
*/

class Solution {
public:

    ListNode* getmid(ListNode* head)
    {
        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    ListNode* reverse(ListNode* right)
    {
        if(right==nullptr || right->next==nullptr)
        {
            return right;
        }
        ListNode* prev=nullptr;
        ListNode* current=right;
        ListNode* forward;

        while(current!=nullptr)
        {
            forward=current->next;
            current->next=prev;
            prev=current;
            current=forward;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        
        if(head==nullptr || head->next==nullptr)
        {
            return;
        }

        ListNode* mid=getmid(head);
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=nullptr;

        right=reverse(right);

        ListNode* nextn;
        ListNode* nextn1;
        
        while(left!=nullptr && right!=nullptr)
        {
            ListNode* nextn=left->next;
            ListNode* nextn1=right->next;

            left->next=right;
            right->next=nextn;

            left=nextn;
            right=nextn1;
        }
    }
};