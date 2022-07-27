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
        
        ListNode *left=head, *right=head->next;
        
        while(right){
            if(right->next==nullptr){
                break;
            }
            else if(right->next->next==nullptr){
                ListNode *temp=right->next,*t2=left->next;
                left->next=temp;
                temp->next=t2;
                left=t2;
                right->next=nullptr;
                right=left->next;
            }
            else{
                right=right->next;
            }
        }
    }
};