class Solution {
public:
    int numDecodings(string s) {
        int ans=1;
        int temp=0;
        int l=s.size()-1;
        for(int i=l;i>=0;i--){
            int x=s[i]=='0'?0:ans;
            if(i<l && (s[i]=='1' || s[i]=='2' && s[i+1]<'7')){x+=temp;}
            temp=ans;
            ans=x;
        }
        
        return ans;
    }
};

