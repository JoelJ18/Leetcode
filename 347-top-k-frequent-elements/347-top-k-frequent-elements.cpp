class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> p;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto it=mp.begin();it!=mp.end();it++){
            p.push({it->second,it->first});
        }

        while(!p.empty() && k!=0){
            ans.push_back(p.top().second);
            p.pop();
            k--;
        }
        
        return ans;
    }
};