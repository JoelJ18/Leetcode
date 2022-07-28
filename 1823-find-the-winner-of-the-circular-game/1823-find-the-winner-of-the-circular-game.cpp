class Solution {
public:
    int help(int n,int k){ 
        
        if(n == 1){return 0;}
        else{return (help(n-1,k)+k)%n;}
    }
    
    
    int findTheWinner(int n, int k) {
        
        return help(n,k)+1;
    }
};