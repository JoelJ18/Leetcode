class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int> in;
        unordered_map<int,int> out;
        for(int i=0;i<trust.size();i++){
            out[trust[i][0]]++;
            in[trust[i][1]]++;
        }
        
        for(int i=1;i<=n;i++){
            if(out[i]==0 && in[i]==n-1){return i;}
        }
        
        return -1;
    }
};