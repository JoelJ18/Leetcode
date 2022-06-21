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
    unordered_map<int,int>mp;
    bool search(TreeNode* x, int j){
        if(x==nullptr){return false;}
        if(mp.find(j-x->val)==mp.end()){
            mp[x->val]=j-x->val;
        }
        else{return true;}
        return(search(x->left,j)||search(x->right,j));
    }
    

    bool findTarget(TreeNode* root, int k) {
        return search(root,k);
        
    }
};