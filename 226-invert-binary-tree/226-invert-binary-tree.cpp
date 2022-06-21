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
    void invert(TreeNode* N1){
        if(N1!=nullptr){
            TreeNode* temp=N1->left;
            N1->left=N1->right;
            N1->right=temp;
            invert(N1->left);
            invert(N1->right);
        }
    }
    
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return(root);
    
    }
};