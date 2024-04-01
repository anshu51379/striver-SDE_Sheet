// https://leetcode.com/problems/reverse-linked-list/description/

//M1
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
        if(head==NULL or head->next==NULL){
            return head;
        }
        ListNode* tmp=reverseList(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;    
        return tmp;    
    }
};

//M2
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
        ListNode *reverse=NULL, *tmp=NULL;
        while(head){
            tmp=head->next;
            head->next=reverse;
            reverse=head;
            head=tmp;
        }
        return reverse;
    }
};