class Solution {
public:
    
    vector<vector<int>> func(vector<vector<int>>& intervals){
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
 
        int j=1;
        vector<int> v=intervals[0];
        while(j<intervals.size()){
            if(v[1]>=intervals[j][0]){
                v[1]=max(v[1],intervals[j][1]);
                j++;
            }
            else{
                ans.push_back(v);
                v=intervals[j];
                j++;
            }
        }
        ans.push_back(v);
        return ans;
    }
    
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        return func(intervals);
    }
};