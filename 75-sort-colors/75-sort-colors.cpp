class Solution {
public:
    void swap(int* a, int*b){
        int t=*a;
        *a=*b;
        *b=t;
    }
    
    
    int partition(vector<int>& ans, int low, int high){
        int pivot=ans[high];
        int j=low-1;
        for(int i=low;i<=high;i++){
            if(ans[i]<pivot){j++; swap(&ans[i],&ans[j]);}
        }
        swap(&ans[j+1],&ans[high]);
        return j+1;
    }
    
    
    void quicksort(vector<int>& nums, int low, int high){
        if(low<high){
            int pi=partition(nums,low,high);
        
            quicksort(nums,low,pi-1);
            quicksort(nums,pi+1,high);
        }
    }
    
    void sortColors(vector<int>& nums) {
        quicksort(nums,0,nums.size()-1);

    }
};