class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> x(n);
        bitset<32> rev(n);
        uint32_t ans;
        
        
        for(int i=0;i<32;i++){
            rev[i]=x[31-i];
        }
        
        ans=rev.to_ulong();
        return ans;
    }
};