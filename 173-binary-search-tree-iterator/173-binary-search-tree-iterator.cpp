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
class BSTIterator {
public:
    vector<int>v={};
    int it=-1;
    void inorder(TreeNode* root){
        if(root!=nullptr){
            inorder(root->left);
            v.push_back(root->val);
            inorder(root->right);
        }
    }
    
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        it++;
        return v[it];
    }
    
    bool hasNext() {
        if(it==-1 && v.size()>0){return true;}
        if(it>=v.size()-1){return false;}
        else{return true;}
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */