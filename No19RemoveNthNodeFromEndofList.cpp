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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* First=head;
        ListNode* Tail=head;
        ListNode* BeforeDelete=head;
        for(int i=0;i<n;i++){
            First=First->next;
        }
        if(First==NULL){
            head=head->next;
            return head;
        }
        while(First!=NULL){
            First=First->next;
            BeforeDelete=Tail;
            Tail=Tail->next;
        }
        BeforeDelete->next=Tail->next;
        return head;
    }
};
/*
设置一个双指针，让一个指针先走，后一个跟上就可以了。
*/
