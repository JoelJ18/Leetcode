class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<double,int>> p;
        vector<vector<int>> ans;
        
        for(int i=0;i<points.size();i++){
            double d=sqrt(points[i][0]*points[i][0] + points[i][1]*points[i][1]);
            p.push({-d,i});
        }
        
        
        while(!p.empty() && k!=0){
            
            ans.push_back(points[p.top().second]);
            k--;
            p.pop();
        }
        
        return ans;        
    }
};