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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n1=0;
        ListNode* prev=nullptr;
        ListNode* ans;
        int flag=0;
        
        while(l1 && l2){
            n1+=l1->val + l2->val;
            
            
            ListNode* n=new ListNode(n1%10);
            if(flag==0){
                ans=n;
                prev=n;
                flag=1;
            }
            else{
                prev->next=n;
                prev=n;
            }
            
            n1=n1/10;
            l1=l1->next;
            l2=l2->next;
            
        }
        
        while(l1){
            n1+=l1->val  ;
            ListNode* n=new ListNode(n1%10);
            prev->next=n;
            prev=n;
            n1=n1/10;
            l1=l1->next;
        }
        
        while(l2){
            n1+=l2->val  ;
            ListNode* n=new ListNode(n1%10);
            prev->next=n;
            prev=n;
            n1=n1/10;
            l2=l2->next;
        }
        
        if(n1!=0){
            ListNode* n=new ListNode(n1%10);
            prev->next=n;
            prev=n;
            n1=n1/10;
        }
        
        
        return ans;
    }
};