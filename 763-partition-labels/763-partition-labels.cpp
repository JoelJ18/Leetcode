class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        int arr[26];
        int e=0;
        int p=-1;
        
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']=i;          
            }
        
        for(int i=0;i<s.length();i++){
            e=max(e,arr[s[i]-'a']);
            if(e==i){ans.push_back(e-p);p=e;}
            }
        
        return ans;
        }
 
    
};