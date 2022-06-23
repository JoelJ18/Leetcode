class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans={1};
        
        for(int i=1;i<=rowIndex;i++){
                vector<int> temp;
                temp.push_back(1);
                for(int j=0;j<ans.size()-1;j++){
                    temp.push_back(ans[j]+ans[j+1]);
                }
                temp.push_back(1);
                ans=temp;
            
        }
        return ans;
    }        
    
};