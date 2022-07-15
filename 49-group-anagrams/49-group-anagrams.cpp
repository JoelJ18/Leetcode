class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string s;
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        
        for(int i=0;i<strs.size();i++){
            s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        
        for(auto i:mp){
            ans.push_back(i.second);
        }
        
        return ans;
    }
};