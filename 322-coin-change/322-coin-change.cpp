class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> ans(amount+1,-1);
        ans[0]=0;
        
        for(int i=1;i<=amount;i++){
            int mini=-1;
            for(int j:coins){
                if(i-j>=0 && ans[i-j]!=-1){
                    mini=mini==-1?ans[i-j]+1:min(mini,ans[i-j]+1);
                }
                ans[i]=mini;
            }
        }
        
        return ans[amount];
    }
};