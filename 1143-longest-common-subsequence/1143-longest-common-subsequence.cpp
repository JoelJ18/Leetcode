class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int ans[text1.length()][text2.length()];
        int count=0;
        
        for(int i=0;i<text2.length();i++){
            if(text1[0]==text2[i]){count=1;}
            ans[0][i]=count;
        }
        
        count=0;
        for(int i=0;i<text1.length();i++){
            if(text1[i]==text2[0]){count=1;}
            ans[i][0]=count;
        }
        
        for(int i=1;i<text1.length();i++){
            for(int j=1;j<text2.length();j++){
                if(text1[i]==text2[j]){ans[i][j]=ans[i-1][j-1]+1;}
                else{ans[i][j]=max(ans[i-1][j],ans[i][j-1]);}
            }
        }
        
        
        return ans[text1.length()-1][text2.length()-1];
        
    }
};