class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::unordered_map<int,int>mp;
        int ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==1){ans= nums[i];break;}
        }        
        return ans;
    }
};