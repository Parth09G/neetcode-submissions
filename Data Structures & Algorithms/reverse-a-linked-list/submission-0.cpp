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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = NULL ;
        ListNode* curr = NULL ;
        while(head != NULL){
            curr=head;
            head=head->next;
            curr->next=temp;
            temp=curr;
        }
        // cout<<curr->val<<endl;
        return temp;
    }
};


 