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
    
    TreeNode* make(int prestart, int preend, int instart, int inend, vector<int>& preorder, vector<int>& inorder, map<int,int>& mp){
        
        if(prestart>preend || instart>inend){return nullptr;}
        TreeNode* root = new TreeNode(preorder[prestart]);
        int inindex = mp[root->val];
        int left = inindex-instart;
        
        root->left=make(prestart+1,prestart+left,instart,inindex-1,preorder,inorder,mp);
        root->right=make(prestart+left+1,preend,inindex+1,inend,preorder,inorder,mp);
        
        return root;
    
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        
        return make(0,preorder.size()-1,0,inorder.size()-1,preorder,inorder,mp);
    }
};