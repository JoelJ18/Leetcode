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
    ListNode* sP(ListNode* h){
        ListNode *prev,*n;
        if(h==nullptr){return nullptr;}
        if(h->next==nullptr){return h;}
        n=sP(h->next->next);
        prev=h;
        h=h->next;
        prev->next=n;
        h->next=prev;
        return h;
    }
    
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr){return {};}
        if(head->next==nullptr){return head;}
        return sP(head);
    }
};