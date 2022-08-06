class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int ans=INT_MIN;
        int temp=1;
        for(int i=0;i<nums.size();i++){
            temp*=nums[i];
            ans=max(temp,ans);
            if(temp==0){temp=1;}
        }
        temp=1;
        for(int i=nums.size()-1;i>=0;i--){
            temp*=nums[i];
            ans=max(temp,ans);
            if(temp==0){temp=1;}
        }
        
        return ans;
    }
};