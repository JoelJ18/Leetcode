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
    void find(TreeNode* root, vector<int> temp, vector<vector<int>> &ans, int sum){
        if(root==nullptr){return;}
        temp.push_back(root->val);
        if(root->val==sum){if(root->right==nullptr && root->left==nullptr){ans.push_back(temp);}}
        
        find(root->right,temp,ans,sum-root->val);
        find(root->left,temp,ans,sum-root->val);
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        find(root,{},ans,targetSum);
        return ans;
    }
};