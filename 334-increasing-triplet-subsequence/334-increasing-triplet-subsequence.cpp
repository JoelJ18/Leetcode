class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int x,y;
        x=nums[0];
        y=INT_MAX;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<x){
                x=nums[i];
            }
            else if(nums[i]<y && nums[i]>x){
                y=nums[i];
            }
            else if(nums[i]>y){
                return true;
            }
        }
        return false;
    }
};