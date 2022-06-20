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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){return head;}
        while(head->val==val){
            head=head->next;
            if(head==NULL){return head;}
        }
        ListNode* prev=head, *nh=head;
        head=head->next;
        
        while(head){
            if(head->val==val){
                prev->next=head->next;
                head=head->next;
            }
            else{
                prev=prev->next;
                head=head->next;
            }
        }
        return nh;
    }
};