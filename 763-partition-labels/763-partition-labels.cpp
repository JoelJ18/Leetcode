class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map<char,int> mp;
        int e=0;
        int p=-1;
        
        for(int i=0;i<s.length();i++){
            mp[s[i]]=i;          
            }
        
        for(int i=0;i<s.length();i++){
            e=max(e,mp[s[i]]);
            if(e==i){ans.push_back(e-p);p=e;}
            }
        
        return ans;
        }
 
    
};