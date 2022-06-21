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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){return head;}
        ListNode *a,*b;
        a=head;
        b=head->next;
        while(b){
            if(a->val==b->val){
                b=b->next;
                a->next=NULL;
            }
            else{
                a->next=b;
                a=b;
                b=b->next;
            }
        }
        return head;
    }
};