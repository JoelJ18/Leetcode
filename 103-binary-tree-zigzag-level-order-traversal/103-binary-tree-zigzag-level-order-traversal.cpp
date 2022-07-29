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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==nullptr){return {};}
        
        vector<vector<int>> ans;
        queue<TreeNode*>q;
        q.push(root);
        
        bool check=true;
        
        while(!q.empty()){
            int qsize=q.size();
            vector<int> v(qsize);
            for(int i=0;i<qsize;i++){
                TreeNode *temp=q.front();
                q.pop();
                check?v[i]=temp->val:v[qsize-i-1]=temp->val;
                if(temp->left){q.push(temp->left);}
                if(temp->right){q.push(temp->right);}
            }
            ans.push_back(v);
            check=!check;
        }
        
        return ans;
    }
};