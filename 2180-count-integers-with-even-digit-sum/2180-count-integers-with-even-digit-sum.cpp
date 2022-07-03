class Solution {
public:
    int countEven(int num) {
        string s=to_string(num);
        int x=0;
        for(int i=0;i<s.length();i++){
            x+=s[i];
        }
        if(num%2==0 && x%2==0){return num/2;}
        else if(num%2==0 && x%2!=0){return num/2 -1;}
        else {return num/2;}
    }
};