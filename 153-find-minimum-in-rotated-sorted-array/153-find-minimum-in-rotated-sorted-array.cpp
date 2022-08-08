class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        
        while(l<r){
            int mid=(l+r)/2;
            if(nums[l]<nums[r]){r=l;}
            else{
                if(nums[mid]<nums[r]){r=mid;}
                else{l=mid+1;}
            }
        }
        return nums[r];
    }
};

