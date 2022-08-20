class Solution {
public:
    int rob(vector<int>& nums) {
        
        int x=nums[0],y=0;
        for(int i=1;i<nums.size();i++){
            int temp=x;
            x=max(x,y+nums[i]);
            y=temp;
        }
        
        return x;
    }
};