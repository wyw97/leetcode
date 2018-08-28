/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* LN=new ListNode(-1);
        ListNode* Root=LN;
        ListNode* p1=l1;
        ListNode* p2=l2;
        while(p1!=NULL && p2!=NULL){
            if(p1->val<=p2->val){
                LN->next=new ListNode(p1->val);
                p1=p1->next;
                LN=LN->next;
            }
            else{
                LN->next=new ListNode(p2->val);
                p2=p2->next;
                LN=LN->next;
            }
        }
        while(p1!=NULL){
            LN->next=new ListNode(p1->val);
            p1=p1->next;
            LN=LN->next;
        }
        while(p2!=NULL){
            LN->next=new ListNode(p2->val);
            p2=p2->next;
            LN=LN->next;
        }
        return Root->next;    
    }
};
