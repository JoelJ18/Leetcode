class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        unordered_set<string> ch;
        for(auto i:wordDict){
            ch.insert(i);
        }
        
        vector<bool> ans(s.length()+1,false);
        ans[0]=true;
        
        for(int i=1;i<=s.length();i++){
            for(int j=0;j<i;j++){
                string temp=s.substr(j,i-j);
                if(ch.count(temp)){
                    if(ans[j]){
                        ans[i]=true;
                        break;
                    }
                }
            }
        }
        
        return ans[s.length()];
    }
};