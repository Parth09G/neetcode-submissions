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
        int size = 0;
        stack<ListNode* > s1;

        ListNode* it= head;
        ListNode* currElement= NULL;
        ListNode* nextElement= NULL;

        while(it) {
            s1.push(it);
            size++;
            it=it->next;
        }

        it= head;

        while(s1.size()>size-size/2) {
            nextElement= s1.top();
            s1.pop();
            currElement= it;
            it=it->next;
            currElement->next= nextElement;
            nextElement->next=it;    
        }
        it->next=NULL;



    }
};


 