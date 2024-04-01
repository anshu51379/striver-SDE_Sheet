 // https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *left=head, *right=head;
        for(int i=0; i<n; i+=1){
            right=right->next;
        }
        if(right==NULL){
            return head->next;
        }
        while(right!=NULL and right->next!=NULL){
            right=right->next;
            left=left->next;
        }
        ListNode* tmp=left->next;
        left->next = left->next->next;
        delete tmp;
        return head;
    }
};
