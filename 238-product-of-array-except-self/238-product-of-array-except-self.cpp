class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int m=1;
        vector<int> ans;
        
        ans.push_back(1);
        for(int i=1;i<nums.size();i++){
            m=m*nums[i-1];
            ans.push_back(m);
        }
        
        m=1;
        for(int i=1;i<nums.size();i++){
            m=m*nums[nums.size()-i];
            ans[nums.size()-1-i]*=m;
        }

        return ans;
    }
};