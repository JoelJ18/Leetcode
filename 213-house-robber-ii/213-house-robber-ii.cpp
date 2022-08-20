class Solution {
public:
    int rob(vector<int>& nums) {
        
        if(nums.size()==1){return nums[0];}
        
        int x=nums[0],y=0,z=nums[1];
        for(int i=1;i<nums.size()-1;i++){
            int temp=x;
            x=max(x,y+nums[i]);
            y=temp;
        }
        y=0;
        for(int i=2;i<nums.size();i++){
            int temp=z;
            z=max(z,y+nums[i]);
            y=temp;
        }
        
        return max(x,z);
        
    }
};