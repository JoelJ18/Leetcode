class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> s(num1.size()+num2.size(),0);
        int i=0;
        string ans="";
        
        if(num1=="0" || num2=="0"){return "0";}
        
        for(int a=num1.length()-1;a>=0;a--){
            for(int b=num2.length()-1;b>=0;b--){
                s[a+b+1]+=(num1[a]-'0')*(num2[b]-'0');
                s[a+b]+=s[a+b+1]/10;
                s[a+b+1]=s[a+b+1]%10;
            }
        }
        
        while(s[i]==0 && i<s.size()){if(i!=0){break;}i++;}
        for(i;i<s.size();i++){ans.push_back(s[i]+'0');}
        return ans;
    }
};