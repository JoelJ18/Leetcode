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
    vector<int>v;
   void search(TreeNode* x){
       if(x!=nullptr){
        search(x->left);
        v.push_back(x->val);
        search(x->right);
       }
    }
    

    bool findTarget(TreeNode* root, int k) {
        search(root);
        int x=0;
        int r=v.size()-1;
        while(x<r){
            if(v[x]+v[r]==k){return true;}
            else if(v[x]+v[r]>k){r--;}
            else {x++;}
        }
        return false;
    }
};