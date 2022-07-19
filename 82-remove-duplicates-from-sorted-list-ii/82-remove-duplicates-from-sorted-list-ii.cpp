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
        
        if(head==nullptr){return nullptr;}
        if(head->next==nullptr){return head;}
        
        ListNode *ans=new ListNode(0,head),*a=ans,*b=head;
        
        while(b){
            if(b->next && b->val==b->next->val){
                while(b->next && b->val==b->next->val){
                    b=b->next;
                }
                a->next=b->next;
            }
            else{
                a=a->next;
            }
            b=b->next;
    }
    return ans->next;
    }
};