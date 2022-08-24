class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int x=nums[0];
        
        for(int i=1;i<nums.size();i++){
            x--;
            if(x<0){return false;}
            if(nums[i]>x){x=nums[i];}
        }
        
        return true;
    }
};