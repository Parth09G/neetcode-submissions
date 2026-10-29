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
    ListNode* findMiddle(ListNode* head){
        ListNode* fast=head;
        ListNode* slow=head;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        return slow;
    }

    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=NULL;
        while(head){
            curr= head;
            head=head->next;
            curr->next=prev;
            prev=curr;
        }

        return prev;
    }

    void MergeList(ListNode* left, ListNode* right){
        ListNode* l = NULL;
        ListNode* r = NULL;

        while(right){
            l= left;
            r= right;
            left=left->next;
            right= right->next;
            l->next=r;
            r->next=left;
        }
        if(left) left->next=nullptr;

    }
    void reorderList(ListNode* head) {
        ListNode* Mid = findMiddle(head);
        ListNode* List2=reverseList(Mid);
        MergeList(head,List2);
    }
};
