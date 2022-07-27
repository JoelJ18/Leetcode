class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char>st;
        int c=0;
        string ans="";
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==')'){c++;st.push(s[i]);}
            else if(s[i]=='('){if(c-1>=0){st.push(s[i]);c--;}}
            else{st.push(s[i]);}
        }
        
        while(!st.empty()){
            if(st.top()==')'){if(c==0){ans+=st.top();st.pop();}else{c--;st.pop();}}
            else{ans+=st.top();st.pop();}
            
        }
        
        return ans;
    }
};