class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        vector<int> num(n,0);
        for(int i=0;i<edges.size();i++){
            num[edges[i][1]]++;
        }
        
        for(int i=0;i<num.size();i++){
            if(num[i]==0){ans.push_back(i);}
        }
        
        return ans;
    }
};