class Solution {
public:
    string addStrings(string num1, string num2) {
        int a=num1.length()-1,b=num2.length()-1;
        int m=0;
        stack<char>s;
        string ans;
        while(a>=0 && b>=0){
            m+=(num1[a]-'0')+(num2[b]-'0');
            s.push(m%10 +'0');
            m=m/10;
            a--;
            b--;
        }
        
        while(a>=0){
            m+=num1[a]-'0';
            s.push(m%10+'0');
            m=m/10;
            a--;
        }
        
        while(b>=0){
            m+=num2[b]-'0';
            s.push(m%10+'0');
            m=m/10;
            b--;
        }
        
        while(m!=0){s.push(m+'0'); m=m/10;}
        
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }

        return ans;
    }
};