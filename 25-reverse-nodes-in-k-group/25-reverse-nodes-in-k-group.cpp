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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr){return head;}
        ListNode *x=head,*prev,*n;
        int count=0;
        while(count<k-1){
            if(x==nullptr || x->next==nullptr){return head;}
            x=x->next;
            count++;
        }
        
        count=0;
        
        prev=head;
        x=head->next;
        
        while(count<k-1){
            n=x->next;
            x->next=prev;
            prev=x;
            x=n;
            count++;
        }
        
        head->next=reverseKGroup(x,k);
        return prev;
        
    }
};