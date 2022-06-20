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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr){return ans;}
        queue<vector<TreeNode*>> q;
        q.push({root});
        ans.push_back({root->val});
        while(!q.empty()){
            vector<int> temp;
            vector<TreeNode*> t;
            for(auto i:q.front()){
            if(i->left!=nullptr){temp.push_back(i->left->val);t.push_back(i->left);}
            if(i->right!=nullptr){temp.push_back(i->right->val);t.push_back(i->right);}
            }
            q.pop();

            if(!temp.empty()){ans.push_back(temp);q.push(t);}
            }
        return ans;
        }
    
};