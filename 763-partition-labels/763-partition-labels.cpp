class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        int e=-2;
        int p=0;
        for(int i=0;i<s.length();i++){
            
            for(int j=s.length()-1;j>=0;j--){
                if(s[i]==s[j]){if(j>e){e=j;break;}}
                if(j<i){break;}
                
            }
            if(i==e){ans.push_back(e-p+1);p=e+1;e=-1;}
            }
        return ans;
        }
 
    
};