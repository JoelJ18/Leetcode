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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){return head;}
        ListNode* tail=head->next;
        ListNode* temp;
        head->next=NULL;
        
        while(tail){
            
            temp=tail->next;
            tail->next=head;
            head=tail;
            tail=temp;
        }
        return head;
    }
};