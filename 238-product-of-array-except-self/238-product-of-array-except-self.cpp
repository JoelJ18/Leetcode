class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ans[nums.size()];
        int m=1;
        ans[nums.size()-1]=1;
        vector<int> arr;
        for(int i=1;i<nums.size();i++){
            m=m*nums[nums.size()-i];
            ans[nums.size()-1-i]=m;
        }
        m=1;
        for(int i=1;i<nums.size();i++){
            m=m*nums[i-1];
            ans[i]*=m;
        }
        
        for(int i=0;i<nums.size();i++){
            arr.push_back(ans[i]);
        }
        

        return arr;
    }
};