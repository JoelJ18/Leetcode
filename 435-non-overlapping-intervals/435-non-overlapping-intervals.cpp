class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int x=intervals[0][1];
        int count=0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<x){
                count++;
                x=min(intervals[i][1],x);
            }
            else{
                x=intervals[i][1];
            }
        }
        return count;
    }
};