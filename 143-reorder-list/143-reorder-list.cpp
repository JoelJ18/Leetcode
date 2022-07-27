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
    void reorderList(ListNode* head) {
        
        ListNode *left=head, *right=head;
        ListNode *mid, *n=nullptr;
        
        while(right && right->next){
            left=left->next;
            right=right->next->next;
        }
        
        mid=left->next;
        left->next=nullptr;
        
        while(mid){
            ListNode* temp=mid->next;
            mid->next=n;
            n=mid;
            mid=temp;
        }
        
        mid=n;
        
        while(head && mid){
            ListNode *temp=head->next;
            ListNode *temp2=mid->next;
            head->next=mid;
            mid->next=temp;
            head=temp;
            mid=temp2;
            
        }
    }
};