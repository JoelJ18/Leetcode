class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int,int>mp;
        int max;
        int ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>max){max=mp[nums[i]];ans=nums[i];}
        }
        return ans;
    }
};