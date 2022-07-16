class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> mp;
        string sub;
        vector<string> ans;
        
        if(s.length()<10){return {};}
        
        for(int i=0;i<=s.length()-10;i++){
            sub=s.substr(i,10);
            mp[sub]++;
            if(mp[sub]==2){ans.push_back(sub);}
        }
        return ans;
    }
};