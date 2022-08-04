class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>> p;
        string ans="";
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        
        for(auto it=mp.begin();it!=mp.end();it++){
            p.push({it->second,it->first});
        }

        while(!p.empty()){
            int x=p.top().first;
            while(x!=0){
                ans+=(p.top().second);
                x--;
            }
            p.pop();
        }
        
        return ans;
    }
};