class Solution {
public:
    int findTheWinner(int n, int k) {
            queue<int> q;
            //pushing the elements from 1 to k in a queue
            for(int i=1;i<=n;i++){
                q.push(i);
            }
            while(q.size()>1){
                int temp=k;    
                for(temp=k;temp>1;temp--){
                    int first=q.front();
                    q.pop();
                    q.push(first);
                }
                q.pop();
            }
            return q.front();
        }
};