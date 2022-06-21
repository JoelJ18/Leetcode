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
    bool check(TreeNode* x, long a, long b){
        if(x==nullptr){return true;}
        if(x->val>a && x->val<b){return check(x->left,a,x->val)&&check(x->right,x->val,b);}
        return false;
    }
    bool isValidBST(TreeNode* root) {
     return check(root,LONG_MIN,LONG_MAX);
    }
};