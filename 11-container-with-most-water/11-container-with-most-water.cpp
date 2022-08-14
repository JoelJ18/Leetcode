class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int max=0;
        while(l<r){
            
            if(min(height[l],height[r])*(r-l)>max){max=min(height[l],height[r])*(r-l);}
            if(min(height[l],height[r])==height[l]){l++;}
            else{r--;}
        }
        
        return max;
    }
};