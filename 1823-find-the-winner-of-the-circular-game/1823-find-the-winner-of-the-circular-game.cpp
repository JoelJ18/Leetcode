class Solution {
public:
    int findTheWinner(int n, int k) {
        
        queue<int> q;
        int count=1;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
 
        
        while(q.size()!=1){
            
            
            if(count<k){
                q.push(q.front());
                q.pop();
                
            }
            else{q.pop();count=0;}
            
            count++;
        }
        
        return q.front();
    }
};