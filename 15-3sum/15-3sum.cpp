class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;

 
        if(nums.size()<3){return {};}
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){continue;}
            int l=i+1;
            int r=nums.size()-1;
            
            while(l<r){
                int t=nums[i]+nums[l]+nums[r];
                if(t<0){l++;}
                else if(t>0){r--;}
                else{
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    while(nums[l]==nums[l-1] && l<r){l++;}
                }
            }
            }
        

        return ans;
    }
};