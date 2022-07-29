/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int s=nums.size()-1;
        return Makenode(nums,0,s);
    }
    
    TreeNode* Makenode(vector<int>& nums, int l, int r){
        
        if(l>r){return nullptr;}
        
        int mid=(l+r)/2;
        TreeNode* ans = new TreeNode(nums[mid]);
        
        ans->left=Makenode(nums,l,mid-1);
        ans->right=Makenode(nums,mid+1,r);
        return ans;
    }
};