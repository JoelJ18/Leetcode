class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans={{1}};
        
        for(int i=0;i<rowIndex+1;i++){
            if(i==0){ans[0]={1};}
            else if(i==1){ans[0]={1,1};}
            else{
                vector<int> temp;
                temp.push_back(1);
                for(int j=0;j<ans[0].size()-1;j++){
                    temp.push_back(ans[0][j]+ans[0][j+1]);
                }
                temp.push_back(1);
                ans[0]=temp;
            }
        }
        return ans[0];
    }        
    
};