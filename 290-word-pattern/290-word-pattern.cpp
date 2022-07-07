class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp;
        unordered_map<string,char> mp2;
        stringstream ss(s);
        string t;
        int count=0;
        while(ss>>t){count++;}
        if(count!=pattern.length()){return false;}
        ss.clear();
        ss.str(s);
        for(int i=0;i<pattern.length();i++){
            ss>>t;
            if(mp.find(pattern[i])!=mp.end() || mp2.find(t)!=mp2.end()){
                if(mp[pattern[i]]!=t || mp2[t]!=pattern[i]){return false;}
            }
            else{
                mp[pattern[i]]=t;
                mp2[t]=pattern[i];
            }
        }
        return true;
    }
};