/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<int,Node*>mp;
    Node* cloneGraph(Node* node) {
        
        if(node==nullptr){return nullptr;}
        if(mp.find(node->val)!=mp.end()){return mp[node->val];}
        
        Node *temp= new Node(node->val);
        mp[node->val]=temp;
        
        for(Node *i:node->neighbors){
            Node *t2=cloneGraph(i);
            temp->neighbors.push_back(t2);
        }
        
        return temp;
        
    }
};