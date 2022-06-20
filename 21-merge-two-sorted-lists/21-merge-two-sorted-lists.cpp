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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* a=list1,*b=list2;
        
        if(a==NULL){return b;}
        if(b==NULL){return a;}
        
        if(list2->val<list1->val){a=list2; b=list1;}
        ListNode* h=a;

        while(a && b){
            if(a->next==NULL){
                a->next=b;
                break;
            }
            
            if(b->val>=a->val && b->val<a->next->val){
                ListNode* temp=a->next;
                a->next=b;
                b=b->next;
                a->next->next=temp;
                a=a->next;
            }
            else{
                a=a->next;

                }
            }
        
        return h;
    }
};