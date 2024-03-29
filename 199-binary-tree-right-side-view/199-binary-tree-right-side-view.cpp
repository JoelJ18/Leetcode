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
    
    void find(TreeNode* root, vector<int> &ans, int count){
        if(root==nullptr){return;}
        if(count==ans.size()){ans.push_back(root->val);}
        find(root->right,ans,count+1);
        find(root->left,ans,count+1);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        if(root==nullptr){return {};}
        vector<int> ans;
        find(root,ans,0);
        return ans;
    }
};