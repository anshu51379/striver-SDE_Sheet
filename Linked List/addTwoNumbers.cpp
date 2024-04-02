// https://leetcode.com/problems/add-two-numbers/description/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *tmp = new ListNode();
        ListNode *res=tmp;
        int sum=0, carry=0;
        while(l1 or l2 or carry){
            sum=carry;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            tmp->next = new ListNode(sum%10);
            tmp=tmp->next;
        }
        return res->next;
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0, carry=0;
        ListNode *head=NULL, *tail=NULL;
        while(l1 or l2){
            int a, b;
            if(l1){
                a=l1->val;
            }else{
                a=0;
            }
            if(l2){
                b=l2->val;
            }else{
                b=0;
            }
            sum=a+b+carry;
            if(!head){
                head=tail=new ListNode(sum%10);
            }else{
                tail->next=new ListNode(sum%10);
                tail=tail->next;
            }
            carry=sum/10;
            if(l1){l1=l1->next;}
            if(l2){l2=l2->next;}
        }
        if(carry){
            tail->next=new ListNode(carry);
        }
        return head;
    }
};
