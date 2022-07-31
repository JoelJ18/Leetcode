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
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr){return root;}
        
        if(root->val==key){
            if(root->left==nullptr){return root->right;}
            else if(root->right==nullptr){return root->left;}
            else{
                TreeNode* temp=root->right;
                while(temp->left){temp=temp->left;}
                int val=temp->val;
                deleteNode(root,val);
                root->val=val;
                return root;
            }
        }
        
        if(root->val>key){root->left=deleteNode(root->left,key);}
        else{root->right=deleteNode(root->right,key);}
        return root;
        
        
    }
};