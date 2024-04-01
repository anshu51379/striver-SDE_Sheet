// https://leetcode.com/problems/middle-of-the-linked-list/description/

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
    ListNode* middleNode(ListNode* head) {
        ListNode* tortoise=head, *hare=head;
        while(hare and hare->next){
            tortoise=tortoise->next;
            hare=hare->next->next;
        }
        return tortoise;
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
    ListNode* middleNode(ListNode* head) {
        ListNode *left=head, *right=head;
        int cnt=0;
        while(left!=NULL){
            left=left->next;
            cnt+=1;
        }
        if(cnt&1){
            int tmp=cnt/2;
            while(tmp--){
                right=right->next;
            }
        }else{
            int tmp=ceil(cnt/2);
            while(tmp--){
                right=right->next;
            }
        }
        return right;
    }
};
