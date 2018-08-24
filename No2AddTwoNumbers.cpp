/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 哎，自己写的，速度实在是太慢了，二刷的时候一定认真写快速的算法quq
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int Number[1005]={0};
        int cnt=0;
        while( l1!=NULL && l2!=NULL){
            Number[cnt]+=l1->val+l2->val;
            Number[cnt+1]=Number[cnt]/10;
            Number[cnt]%=10;
            l1=l1->next;
            l2=l2->next;
            ++cnt;
        }
        while(l1!=NULL){
            Number[cnt]+=l1->val;
            Number[cnt+1]=Number[cnt]/10;
            Number[cnt]%=10;
            l1=l1->next;
            ++cnt;
        }
        while(l2!=NULL){
            Number[cnt]+=l2->val;
            Number[cnt+1]=Number[cnt]/10;
            Number[cnt]%=10;
            l2=l2->next;
            ++cnt;
        }
        while(Number[cnt]){
            Number[cnt+1]=Number[cnt]/10;
            Number[cnt]%=10;
            ++cnt;
        }
        ListNode* res = new ListNode(Number[0]);
        ListNode* temp=res;
        for(int i=1;i<cnt;i++){
            temp->next=new ListNode(Number[i]);
            temp=temp->next;
        }
        return res;
    }
};
