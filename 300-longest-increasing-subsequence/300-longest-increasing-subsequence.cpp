class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int> ans;
        ans.push_back(nums[0]);
        
        for(int i:nums){
            int j=ans.size();
            if(i>ans[j-1]){ans.push_back(i);}
            else{
                int ind=lower_bound(ans.begin(),ans.end(),i)-ans.begin();
                if(ind<j){ans[ind]=i;}
            }
        }
        
        return ans.size();
        
    }
};