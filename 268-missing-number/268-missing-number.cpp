class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int s=nums.size();
        int sum=(s+1)*(s)/2;
        int rsum=0;
        for(int i=0;i<s;i++){rsum+=nums[i];}
        return sum-rsum;
    }
};