class Solution {
public:
    string longestPalindrome(string s) {
        int st=0,e=0;
        
        for(int i=0;i<s.length();i++){
            int l=i,r=i;
            while(l>=0 && r<s.length()){
                if(s[l]==s[r]){if((r-l)>(e-st)){st=l;e=r;}l--;r++;}
                else{break;}
            }
            
            l=i,r=i+1;
            while(l>=0 && r<s.length()){
                if(s[l]==s[r]){if((r-l)>(e-st)){st=l;e=r;}l--;r++;}
                else{break;}
            }
            
        }
        
        return s.substr(st,e-st+1);
    }
};