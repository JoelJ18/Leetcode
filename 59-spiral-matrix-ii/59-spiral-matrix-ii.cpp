class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int>(n));
        int count=1;
        int a=0,b=0,c=n-1,d=n-1;
        while(count<=n*n){
            for(int i=a,j=b; j<=d;j++){
                v[i][j]=count++;
            }
            a++;
            for(int i=a,j=d;i<=c;i++){
                v[i][j]=count++;
            }
            d--;
            for(int i=c,j=d;j>=b;j--){
                v[i][j]=count++;
            }
            c--;
            
            for(int i=c,j=b;i>=a;i--){
                v[i][j]=count++;
            }
            b++;
        }
        return v;
    }
};