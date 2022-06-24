class Solution {
public:
    bool isPowerOfThree(int n) {
        double x;
        if(n<=0){return false;}
        x=log10(n)/log10(3);
        if(int(x)==x){return true;}
        return false;
    }
};