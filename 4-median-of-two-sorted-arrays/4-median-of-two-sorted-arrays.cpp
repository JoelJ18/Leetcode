class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert( nums1.end(), nums2.begin(), nums2.end() );
        sort(nums1.begin(),nums1.end());
        double x=0;
        if((nums1.size()%2)==1){return nums1[nums1.size()/2];}
        else{x=(nums1[nums1.size()/2] + nums1[(nums1.size()/2)-1])/2.0;
            return x;}
    }
};