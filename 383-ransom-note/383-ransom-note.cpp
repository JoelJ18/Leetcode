class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[26]={0};
        for(auto i:magazine){
            a[i-97]++;
        }
        for(auto i:ransomNote){
            a[i-97]--;
            if(a[i-97]<0){return false;}
        }
        return true;
    }
};