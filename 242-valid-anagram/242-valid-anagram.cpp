class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26]={0};
        for(auto i:s){a[i-97]++;}
        for(auto i:t){a[i-97]--;}
        for(int i=0;i<26;i++){if(a[i]!=0){return false;}}
        return true;
    }   
};