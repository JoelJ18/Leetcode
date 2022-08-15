class Solution {
public:
    int hammingWeight(uint32_t n) {
        string s;
     
        int count=0;
        bitset<32> x(n);
        stringstream ss;
        ss<<x;
        ss>>s;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){count++;}
        }
        return count;
    }
};