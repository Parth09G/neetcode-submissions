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
    bool hasCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = NULL;
        if(head==NULL) return false;
        if(head->next){
            fast= head->next;
        }else return false;

        while(fast!= NULL){
            if(fast==slow) return true;
            slow=slow->next;
            if(fast->next==NULL) break;
            fast=fast->next->next;
        }

        return false;
        
    }
};


// 1 2 3 4 
