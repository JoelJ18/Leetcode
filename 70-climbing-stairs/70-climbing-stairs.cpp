class Solution {
public:
    int climbStairs(int n) {
        int ans[2]={0,1};
        for(int i=0;i<n;i++){
            int temp=ans[1];
            ans[1]=ans[0]+ans[1];
            ans[0]=temp;
        }
        return ans[1];
    }
};