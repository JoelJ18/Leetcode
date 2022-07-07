class Solution {
public:
    int longestPalindrome(string s) {
        int l[52];
        fill(l,l+(end(l) - begin(l)),0);
        int ans=0;
        int odd=0;
        for(int i=0;i<s.length();i++){
            if(s[i]<91){l[s[i]-'A']++;}
            else{l[s[i]-'a'+26]++;}
        }
        
        for(int i=0;i<52;i++){
            if(l[i]!=0 && l[i]%2==0){ans+=l[i];}
            else{if(l[i]!=0){ans+=l[i]-1;odd=1;}}
        }
        ans+=odd;
        return ans;
    }
};