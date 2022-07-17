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
    ListNode *detectCycle(ListNode *head) {
        ListNode *n=head,*m=head;
        int flag=0;
        if(!head || !head->next){return nullptr;}
        
        while(m && m->next){
            n=n->next;
            m=m->next->next;
            if(n==m){flag=1;break;}
        }
        
        if(flag==0){return nullptr;}
        
        while(head!=n){
            head=head->next;
            n=n->next;
        }
        
        return head;
    }
};